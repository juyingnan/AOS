// FileName: threadmanager.cc
// Descriptions:
// Author: Joe Shang, 13/10/2012

#include "threadmanager.h"
#include "system.h"

//----------------------------------------------------------------------
// printThread
//	Print thread's information and status.
//	NOTE:it's a dummy C function which is staic only using in this module
//----------------------------------------------------------------------

static void printThread(int arg)
{
	Thread* thread = (Thread*)arg;
	const char* status[5] = {"Created", "Running", "Ready", "Blocked", "Zombie"};

	printf(" %8d | %10s | %6d | %8d | %s \n",
			thread->getThreadID(),
			thread->getName(),
			thread->getUserID(),
			thread->getPriority(),
			status[thread->getStatus()]);
}

//----------------------------------------------------------------------
// ThreadManager::ThreadManager
//	Initialize the list of all threads and thread count.
//----------------------------------------------------------------------

ThreadManager::ThreadManager()
{
	threadCnt = 0;
	threadList = new List();
}

//----------------------------------------------------------------------
// ThreadManager::~ThreadManager
//	De-allocate the list of all threads and reset thread count.
//----------------------------------------------------------------------

ThreadManager::~ThreadManager()
{
	delete [] threadList;
}

//----------------------------------------------------------------------
// ThreadManager::createThread
//	Create a thread from ThreadManager, return NULL if the thread count
//	reach the limitation.
//----------------------------------------------------------------------

Thread*
ThreadManager::createThread(char* debugName, int uid)
{
	Thread* newThread = NULL;

	if (threadCnt + 1 < THREAD_COUNT_MAX)
	{
		threadCnt++;

		int tid = generateThreadID();
		newThread = new Thread(debugName, uid, tid);

        if (threadCnt > 1)
        {
            currentThread->addChild(newThread);
        }

		threadList->Append((void *)newThread);
	}

	return newThread;
}

Thread*
ThreadManager::createThread(char* debugName)
{
	return createThread(debugName, 0);
}

//----------------------------------------------------------------------
// ThreadManager::deleteThread
//	Delete thread from ThreadManager.
//----------------------------------------------------------------------

void
ThreadManager::deleteThread(Thread* thread)
{
	if (thread != NULL)
	{
		threadCnt--;

		int tid = thread->getThreadID();
		threadIDMap[tid] = 0;
		threadList->RemoveByComp(threadIDComp, (void *)tid);

		delete thread;
	}
}

//----------------------------------------------------------------------
// ThreadManager::listThreadStatus
//	List information of all threads in the system.
//----------------------------------------------------------------------
int
ThreadManager::generateThreadID()
{
	int i;
	for (i=0; i<THREAD_COUNT_MAX; i++)
	{
		if (threadIDMap[i] == 0)
		{
			threadIDMap[i] = 1;

			return i;
		}
	}

	return -1;
}

//----------------------------------------------------------------------
// ThreadManager::listThreadStatus
//	List information of all threads in the system.
//----------------------------------------------------------------------

void
ThreadManager::listThreadStatus()
{
	printf("Command TS -> List Thread Status:\n");
	printf(" ThreadID | ThreadName | UserID | Priority | Status |\n");
	printf(" -------- | ---------- | ------ | -------- | ------ |\n");

	threadList->Mapcar((VoidFunctionPtr)printThread);
}

