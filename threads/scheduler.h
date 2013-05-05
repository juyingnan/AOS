// scheduler.h
//	Data structures for the thread dispatcher and scheduler.
//	Primarily, the list of threads that are ready to run.
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation
// of liability and disclaimer of warranty provisions.

#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "copyright.h"
#include "list.h"
#include "thread.h"
//Added by Ju Yingnan
//2013-3-19
#include "timer.h"
#define TIME_DELAY 0
#define LOWEST_PRIORITY 255
#define SCHED_PRIORITY
//#define SCHED_FIFO

// The following class defines the scheduler/dispatcher abstraction --
// the data structures and operations needed to keep track of which
// thread is running, and which threads are ready but not running.

class Scheduler
{
public:
    Scheduler();			// Initialize list of ready threads
    ~Scheduler();			// De-allocate ready list

    void ReadyToRun(Thread* thread);	// Thread can be dispatched.
    Thread* FindNextToRun();		// Dequeue first thread on the ready
    // list, if any, and return thread.
    void Run(Thread* nextThread);	// Cause nextThread to start running
    void Print();			// Print contents of ready list

    //Added by Ju Yingnan
    //2013-3-19
    List *GetAllThreadList()
    {
        return allThreadList;
    }
    List *GetReadyList()
    {
        return readyList;
    }
    void AddToAllThreadList(Thread* thread); //add thread to all thread list
    bool RemoveFromThreadList(Thread* threadToBeRemoved);//Remove specified item from list, if no item matched, return false.
    void AdjustAllPriority();

private:
    List *readyList;  		// queue of threads that are ready to run,
    // but not running
    //Added by Ju Yingnan
    //2013-3-19
    List *allThreadList;
    Timer *timerInter;
};

//Added by Ju Yingnan
//2013-3-19
extern void Scheduler_RR(int delay);


#endif // SCHEDULER_H