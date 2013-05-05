// synch.cc
//	Routines for synchronizing threads.  Three kinds of
//	synchronization routines are defined here: semaphores, locks
//   	and condition variables (the implementation of the last two
//	are left to the reader).
//
// Any implementation of a synchronization routine needs some
// primitive atomic operation.  We assume Nachos is running on
// a uniprocessor, and thus atomicity can be provided by
// turning off interrupts.  While interrupts are disabled, no
// context switch can occur, and thus the current thread is guaranteed
// to hold the CPU throughout, until interrupts are reenabled.
//
// Because some of these routines might be called with interrupts
// already disabled (Semaphore::V for one), instead of turning
// on interrupts at the end of the atomic operation, we always simply
// re-set the interrupt state back to its original value (whether
// that be disabled or enabled).
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "synch.h"
#include "system.h"

//----------------------------------------------------------------------
// Semaphore::Semaphore
// 	Initialize a semaphore, so that it can be used for synchronization.
//
//	"debugName" is an arbitrary name, useful for debugging.
//	"initialValue" is the initial value of the semaphore.
//----------------------------------------------------------------------

Semaphore::Semaphore(char* debugName, int initialValue)
{
    name = debugName;
    value = initialValue;
    queue = new List;
}

//----------------------------------------------------------------------
// Semaphore::Semaphore
// 	De-allocate semaphore, when no longer needed.  Assume no one
//	is still waiting on the semaphore!
//----------------------------------------------------------------------

Semaphore::~Semaphore()
{
    delete queue;
}

//----------------------------------------------------------------------
// Semaphore::P
// 	Wait until semaphore value > 0, then decrement.  Checking the
//	value and decrementing must be done atomically, so we
//	need to disable interrupts before checking the value.
//
//	Note that Thread::Sleep assumes that interrupts are disabled
//	when it is called.
//----------------------------------------------------------------------

void
Semaphore::P()
{
    IntStatus oldLevel = interrupt->SetLevel(IntOff);	// disable interrupts

    while (value == 0)   			// semaphore not available
    {
        queue->Append((void *)currentThread);	// so go to sleep
        currentThread->Sleep();
    }
    value--; 					// semaphore available,
    // consume its value

    (void) interrupt->SetLevel(oldLevel);	// re-enable interrupts
}

//----------------------------------------------------------------------
// Semaphore::V
// 	Increment semaphore value, waking up a waiter if necessary.
//	As with P(), this operation must be atomic, so we need to disable
//	interrupts.  Scheduler::ReadyToRun() assumes that threads
//	are disabled when it is called.
//----------------------------------------------------------------------

void
Semaphore::V()
{
    Thread *thread;
    IntStatus oldLevel = interrupt->SetLevel(IntOff);

    thread = (Thread *)queue->Remove();
    if (thread != NULL)	   // make thread ready, consuming the V immediately
        scheduler->ReadyToRun(thread);
    value++;
    (void) interrupt->SetLevel(oldLevel);
}


// Dummy functions -- so we can compile our later assignments
// Note -- without a correct implementation of Condition::Wait(),
// the test case in the network assignment won't work!
Lock::Lock(char* debugName)
{
    //Added by Ju Yingnan
    //2013-3-21
    name=debugName;
    //threadID=-1;
    //locked=false;
    //queue=new List();

    //Added by Ju Yingnan
    //2013-3-23
    semaphore=new Semaphore(debugName,1);
    lockHolder=NULL;
}
Lock::~Lock()
{
    //delete queue;
    delete semaphore;
}
//void Lock::Acquire()
//{
//    //Added by Ju Yingnan
//    //2013-3-21
//    //关中断、对locked进行循环检查（如果为真即表明锁已被占用，
//    //并当前请求加锁的线程被加入到阻塞队列queue中，调用Threa
//    //d::Sleep进入阻塞）、将locked置为true并记录当前线程的
//    //threadID、开中断
//
//    //disable interrupts
//    IntStatus oldLevel=interrupt->SetLevel(IntOff);
//    while(locked)
//    {
//        //if locked, sleep
//        queue->Append((void *)currentThread);
//        currentThread->Sleep();
//    }
//
//    threadID=currentThread->GetTid();
//    //lock
//    locked=true;
//    //enable interrupts
//    (void) interrupt->SetLevel(oldLevel);
//}
//void Lock::Release()
//{
//    //Added by Ju Yingnan
//    //2013-3-21
//    //关中断，调用Lock::isHeldByCurrentThread通过对比threadID
//    //与当前线程的tid来判断当前线程是否有权解锁，若是则从阻塞队列
//    //queue中唤醒一个线程（通过scheduler->ReadyToRun实现），并
//    //将locked置为false表示已解锁，开中断
//
//    //disable interrupts
//    IntStatus oldLevel = interrupt->SetLevel(IntOff);
//    if(isHeldByCurrentThread())	 //only the thread that acquired the lock may release it.
//    {
//        if(!queue->IsEmpty())
//        {
//            scheduler->ReadyToRun((Thread *)queue->Remove());
//        }
//        // release the lock
//        locked = false;
//    }
//    //enable interrupts
//    (void) interrupt->SetLevel(oldLevel);
//}
//
//bool Lock::isHeldByCurrentThread()
//{
//    if(threadID == currentThread->GetTid())
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}

//Added by Ju Yingnan
//2013-3-23
void Lock::Acquire()
{
    //disable interrupts
    IntStatus oldLevel = interrupt->SetLevel(IntOff);

    semaphore->P();
    lockHolder=currentThread;

     //enable interrupts
    (void) interrupt->SetLevel(oldLevel);
}

void Lock::Release()
{
    //disable interrupts
    IntStatus oldLevel = interrupt->SetLevel(IntOff);

    ASSERT(isHeldByCurrentThread());
    semaphore->V();
    lockHolder=NULL;

     //enable interrupts
    (void) interrupt->SetLevel(oldLevel);
}

bool Lock::isHeldByCurrentThread()
{
    return lockHolder==currentThread;
}

Condition::Condition(char* debugName)
{
    //Added by Ju Yingnan
    //2013-3-21
    name=debugName;
    queue=new List();
}
Condition::~Condition()
{
    //Added by Ju Yingnan
    //2013-3-21
    delete queue;
}
void Condition::Wait(Lock* conditionLock)
{
    //WTF
    //ASSERT(FALSE);
    //Added by Ju Yingnan
    //2013-3-21
    //关中断、将当前锁释放、当前线程加入阻塞队列queue、线程阻塞、开中断、重新加锁

    // disable interrupts
    IntStatus oldLevel = interrupt->SetLevel(IntOff);

    ASSERT(conditionLock->isHeldByCurrentThread());

    conditionLock->Release();
    queue->Append((void *)currentThread);
    currentThread->Sleep();

    //enable interrupts
    (void) interrupt->SetLevel(oldLevel);

    conditionLock->Acquire();
}

void Condition::Signal(Lock* conditionLock)
{
    //Added by Ju Yingnan
    //2013-3-21
    //关中断、从阻塞队列中唤醒一个线程（如果有的话）、开中断

    // disable interrupts
    IntStatus oldLevel = interrupt->SetLevel(IntOff);

    ASSERT(conditionLock->isHeldByCurrentThread());

    if(!queue->IsEmpty())
    {
        scheduler->ReadyToRun((Thread *)queue->Remove());
        //queue->Mapcar((VoidFunctionPtr) ThreadPrint);
    }

    //enable interrupts
    (void) interrupt->SetLevel(oldLevel);
}

void Condition::Broadcast(Lock* conditionLock)
{
    //Added by Ju Yingnan
    //2013-3-21
    //关中断、循环调用Signal直至阻塞队列为空、开中断

    // disable interrupts
    IntStatus oldLevel = interrupt->SetLevel(IntOff);

    while(!queue->IsEmpty())
    {
        scheduler->ReadyToRun((Thread *)queue->Remove());
    }


    //enable interrupts
    (void) interrupt->SetLevel(oldLevel);
}

void Condition::QueuePrint()
{
    queue->Mapcar((VoidFunctionPtr)ThreadPrint);
}


//Added by Ju Yingnan
//2013-3-23
//
//Barrier
//Challenge 1
//
Barrier::Barrier(char* debugName, int size)
{
    name = debugName;
    barrierSize = size;
    cv = new Condition(name);
    lock = new Lock(name);
    finished = 0;
}

Barrier::~Barrier()
{
    delete lock;
    delete cv;
}

void Barrier::Wait()
{
    lock->Acquire();
    if(finished != barrierSize-1)
    {
        finished++;
        cv->Wait(lock);
    }
    else
    {
        finished = 0;
        cv->Broadcast(lock);
    }
    lock->Release();
}

void Barrier::Print()
{
    printf("Waiting thread...\n");
    cv->QueuePrint();
}

