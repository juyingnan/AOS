// exception.cc
//	Entry point into the Nachos kernel from user programs.
//	There are two kinds of things that can cause control to
//	transfer back to here from user code:
//
//	syscall -- The user code explicitly requests to call a procedure
//	in the Nachos kernel.  Right now, the only function we support is
//	"Halt".
//
//	exceptions -- The user code does something that the CPU can't handle.
//	For instance, accessing memory that doesn't exist, arithmetic errors,
//	etc.
//
//	Interrupts (which can also cause control to transfer from user
//	code into the Nachos kernel) are handled elsewhere.
//
// For now, this only handles the Halt() system call.
// Everything else core dumps.
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "system.h"
#include "syscall.h"

//----------------------------------------------------------------------
// ExceptionHandler
// 	Entry point into the Nachos kernel.  Called when a user program
//	is executing, and either does a syscall, or generates an addressing
//	or arithmetic exception.
//
// 	For system calls, the following is the calling convention:
//
// 	system call code -- r2
//		arg1 -- r4
//		arg2 -- r5
//		arg3 -- r6
//		arg4 -- r7
//
//	The result of the system call, if any, must be put back into r2.
//
// And don't forget to increment the pc before returning. (Or else you'll
// loop making the same system call forever!
//
//	"which" is the kind of exception.  The list of possible exceptions
//	are in machine.h.
//----------------------------------------------------------------------

//Added by Ju Yingnan
//2013-5-6
static void SysCallHaltHandler();

static void SysCallCreateHandler();
static void SysCallOpenHandler();
static void SysCallCloseHandler();
static void SysCallWriteHandler();
static void SysCallReadHandler();

static void SysCallExecHandler();
static void SysCallExitHandler();
static void SysCallJoinHandler();
static void SysCallForkHandler();
static void SysCallYieldHandler();

static void ExceptionPageFaultHanlder();

static void ThreadFuncForUserProg(int arg);

void
ExceptionHandler(ExceptionType which)
{
    int type = machine->ReadRegister(2);

    //ORIGINAL
//    if((which == SyscallException) && (type == SC_Halt))
//    {
//        DEBUG('a', "Shutdown, initiated by user program.\n");
//        interrupt->Halt();
//    }
//    else {
//        printf("Unexpected user mode exception %d %d\n", which, type);
//        ASSERT(FALSE);
//    }

    //Added by Ju Yingnan
    //2013-5-5

    switch(which)
    {
        case SyscallException:
            switch(type)
            {
                case SC_Create:
                    SysCallCreateHandler();
                    break;

                case SC_Open:
                    SysCallOpenHandler();
                    break;

                case SC_Close:
                    SysCallCloseHandler();
                    break;

                case SC_Write:
                    SysCallWriteHandler();
                    break;

                case SC_Read:
                    SysCallReadHandler();
                    break;

                case SC_Halt:
                    SysCallHaltHandler();
                    break;

                case SC_Exec:
                    SysCallExecHandler();
                    break;

                case SC_Exit:
                    SysCallExitHandler();
                    break;

                case SC_Join:
                    SysCallJoinHandler();
                    break;

                case SC_Fork:
                    SysCallForkHandler();
                    break;

                case SC_Yield:
                    SysCallYieldHandler();
                    break;
                default:
                    printf("Exception: Unexpected exception type %d\n", type);
                    break;
            }
        case PageFaultException:
            ExceptionPageFaultHanlder();
            break;

        default:
            printf("Unexpected user mode exception %d %d\n", which, type);
            break;
    }
    //PC value go on
    //WIthout the codes below, it will be in dead cycle
//    int NextPC = machine->ReadRegister(NextPCReg);
//    machine->WriteRegister(PCReg, NextPC);
}

/******************************
HALT
******************************/
static void SysCallHaltHandler()
{
    DEBUG('a', "Shutdown, initiated by user program.\n");
    interrupt->Halt();
}

/******************************
CREATE
******************************/
static void SysCallCreateHandler()
{
    DEBUG('a', "Create a new file.\n");
    int baseAddr = machine->ReadRegister(4);
    int value = -1;
    char *name;

    int size = 0;
    while(value != 0)
    {
        machine->ReadMem(baseAddr + size, 1, &value);
        size++;
    }
    name = new char[size];
    name[--size] = '\0';
    int counter = 0;
    while(size--)
    {
        machine->ReadMem(baseAddr++, 1, &value);
        name[counter++] = (char)value;
    }
    printf("Exception: First arg is %s. Arg's length is %d\n", name, counter + 1);
    if(!fileSystem->Create(name, DT_NORMAL))
    {
        printf("Exception: Create file failed.\n");
    }
    else
    {
        printf("File %s created successful.\n", name);
    }
    delete name;
    machine->PCForward();
}

/******************************
OPEN
******************************/
static void SysCallOpenHandler()
{
    DEBUG('a', "Open a file. Return 0 if failed.\n");
    int baseAddr = machine->ReadRegister(4);
    int value = -1;
    char *name;

    int size = 0;
    while(value != 0)
    {
        machine->ReadMem(baseAddr + size, 1, &value);
        size++;
    }
    name = new char[size];
    name[--size] = '\0';
    int counter = 0;
    while(size--)
    {
        machine->ReadMem(baseAddr++, 1, &value);
        name[counter++] = (char)value;
    }
    OpenFile* file = fileSystem->Open(name);
    //			OpenFileId fd = (int)file;
    OpenFileId fd = file->GetFileDescriptor();
#ifdef FILESYS_STUB
#else//FILESYS
    fileSystem->AddToTable(fd, file);
#endif
    machine->WriteRegister(2, fd);
    delete name;
    machine->PCForward();
}

/******************************
CLOSE
******************************/
static void SysCallCloseHandler()
{
    DEBUG('a', "Close a file specified by id.\n");
    int fd = machine->ReadRegister(4);

#ifdef FILESYS_STUB
    OpenFile* file = new OpenFile(fd);
    //			OpenFile* file = fileSystem->GetFromTable(fd);
    delete file;
#else//FILESYS
    OpenFile* file = fileSystem->GetFromTable(fd);
    delete file;
    fileSystem->RemoveFromTable(fd);
#endif
    machine->PCForward();
}

/******************************
WRITE
******************************/
static void SysCallWriteHandler()
{
    DEBUG('a', "Write file.\n");
    int fd = machine->ReadRegister(6);
    int size = machine->ReadRegister(5);
    int baseAddr = machine->ReadRegister(4);
    char* buffer = new char[size];
    //			int value = -1;
    int i = 0;
    while(i < size)
    {
        machine->ReadMem(baseAddr + i, 1, (int *)&buffer[i]);
        i++;
    }
#ifdef FILESYS_STUB
    OpenFile* file = new OpenFile(fd);
#else//FILESYS
    OpenFile* file = fileSystem->GetFromTable(fd);
#endif
    int realSize = file->Write(buffer, size);
    if(realSize != size)
    {
        printf("Exception: Only wrote %d bytes of size.\n", realSize, size);
    }
    else
    {
        printf("Exception: Write %d bytes successfully\n", realSize);
    }
    delete buffer;
    machine->PCForward();
}

/******************************
READ
******************************/
static void SysCallReadHandler()
{
    DEBUG('a', "Read a file.\n");
    int fd = machine->ReadRegister(6);
    int size = machine->ReadRegister(5);
    int baseAddr = machine->ReadRegister(4);
    char* buffer = new char[size];
#ifdef FILESYS_STUB
    OpenFile* file = new OpenFile(fd);
#else//FILESYS
    OpenFile* file = fileSystem->GetFromTable(fd);
#endif
    //			file->Seek(0);
    int realSize = file->Read(buffer, size);
    int i = 0;
    while(i < size)
    {
        machine->WriteMem(baseAddr + i, 1, (int)buffer);
        i++;
    }
    if(realSize != size)
    {
        printf("Exception: Only wrote %d bytes of size.\n", realSize, size);
    }
    else
    {
        machine->WriteRegister(2, realSize);
        printf("Exception: Read %d bytes successfully\n", realSize);
    }
    delete buffer;
    machine->PCForward();
}

/******************************
EXEC
******************************/
static void SysCallExecHandler()
{
    //char fileName[100];
    int arg = machine->ReadRegister(4);
    int i = 0;
//    do
//    {
//        machine->ReadMem(arg + i, 1, (int*)&fileName[i]);
//    }
//    while(fileName[i++] != '\0');

    int value;
    do{
    machine->ReadMem(arg++,1,&value);
    i++;
    }while(value!=0);
    arg-=i;
    char fileName[i];
    for(int j=0;j<i;j++)
    {
    machine->ReadMem(arg+i,1,&value);
    fileName[j]=(char)value;
    }

    OpenFile* executable = fileSystem->Open(fileName);
    if(executable != NULL)
    {
        Thread* thread = threadManager->createThread(fileName);
        thread->space = memoryManager->createAddrSpace(thread->GetTid(), executable);
        machine->WriteRegister(2, thread->GetTid());

        DEBUG('a', "Exec from thread %d -> executable %s\n",
              currentThread->GetTid(), fileName);
              thread->setPriority(0);
        thread->Fork(ThreadFuncForUserProg, 1);
    }
    else
    {
        machine->WriteRegister(2, -1);
    }

    machine->PCForward();
}

/******************************
EXIT
******************************/
static void SysCallExitHandler()
{
    int threadId = currentThread->GetTid();
    memoryManager->deleteAddrSpace(threadId);
    currentThread->Finish();

    machine->PCForward();
}

/******************************
JOIN
******************************/
static void SysCallJoinHandler()
{
}

/******************************
FORK
******************************/
static void SysCallForkHandler()
{
    Thread* thread = threadManager->createThread("UserProg");
    thread->space = memoryManager->shareAddrSpace(currentThread->GetTid(),
                    thread->GetTid());
    int userFunc = machine->ReadRegister(4);
    thread->SetUserRegister(PCReg, userFunc);
    thread->SetUserRegister(NextPCReg, userFunc + 4);
    thread->SetUserRegister(StackReg, machine->ReadRegister(StackReg) - 4);

    DEBUG('a', "Fork from thread %d -> thread %d\n",
          currentThread->GetTid(),
          thread->GetTid());

    thread->Fork(ThreadFuncForUserProg, 0);

    machine->PCForward();
}

/******************************
YEILD
******************************/
static void SysCallYieldHandler()
{
    currentThread->Yield();

    machine->PCForward();
}

static void ThreadFuncForUserProg(int arg)
{
    currentThread->RestoreUserState();
// TODO: Need to modify 3 registers: pc, next pc, sp
    if(arg && currentThread->space != NULL)
    {
// Exec should initialize registers and restore address space.
        currentThread->space->InitRegisters();
        currentThread->space->RestoreState();
    }

    machine->Run();
}

static void ExceptionPageFaultHanlder()
{
	// 1. Get the TLB miss address and calculate which page it belong to.
	int addr = machine->ReadRegister(BadVAddrReg);
	int vpn = (unsigned) addr / PageSize;

	// 2. Handle whether this virtual page in memory or not.
	// After this step, this virtual page is in the physical memory.
	memoryManager->process(vpn);

	if(machine->tlb != NULL)
	{
		// 3. Cache this page in TLB.
		machine->tlb->cacheOnePageEntry(vpn);
	}

	// 4. Page fault statistics.
	stats->numPageFaults++;
}
