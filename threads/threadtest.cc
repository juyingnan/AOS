// threadtest.cc
//	Simple test case for the threads assignment.
//
//	Create two threads, and have them context switch
//	back and forth between themselves by calling Thread::Yield,
//	to illustratethe inner workings of the thread system.
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "system.h"
#include "synch.h"

// testnum is set in main.cc
int testnum = 4;

//----------------------------------------------------------------------
// SimpleThread
// 	Loop 5 times, yielding the CPU to another ready thread
//	each iteration.
//
//	"which" is simply a number identifying the thread, for debugging
//	purposes.
//----------------------------------------------------------------------

void
SimpleThread(int which)
{
    int num;

    for(num = 0; num < 5; num++)
    {
        printf("*** thread %d looped %d times\n", which, num);
        currentThread->Yield();
    }
}

//----------------------------------------------------------------------
// ThreadTest1
// 	Set up a ping-pong between two threads, by forking a thread
//	to call SimpleThread, and then calling SimpleThread ourselves.
//----------------------------------------------------------------------

void
ThreadExercise1Test()
{
    DEBUG('t', "Entering Thread Exercise Test 1");

    Thread* t1 = threadManager->createThread("thread 1", 10);
    Thread* t2 = threadManager->createThread("thread 2", 20);
    Thread* t3 = threadManager->createThread("thread 3", 30);

    t1->Fork(SimpleThread, t1->getThreadID());
    t2->Fork(SimpleThread, t1->getThreadID());
    t3->Fork(SimpleThread, t3->getThreadID());
}

void
JustYield(int which)
{
    printf("Current running thread is %s\n", currentThread->getName());
    threadManager->listThreadStatus();
    currentThread->Yield();
    threadManager->listThreadStatus();
}

//----------------------------------------------------------------------
// ThreadExercise2Test
//	Set up 3 threads with different priority and then begin to schedule
//	with TS command to show the effect of priority in thread scheduling.
//----------------------------------------------------------------------

void
ThreadExercise2Test()
{
    DEBUG('t', "Entering Thread Exercise Test 2");

    currentThread->setPriority(4);

    printf("Create 3 threads:\n");

    Thread* t1 = threadManager->createThread("thread 1", 10);
    Thread* t2 = threadManager->createThread("thread 2", 20);
    Thread* t3 = threadManager->createThread("thread 3", 30);

    t1->setPriority(8);
    t2->setPriority(0);
    t3->setPriority(5);

    threadManager->listThreadStatus();

    printf("After fork 3 threads:\n");

    t1->Fork(JustYield, t1->getThreadID());
    t2->Fork(JustYield, t1->getThreadID());
    t3->Fork(JustYield, t3->getThreadID());

    threadManager->listThreadStatus();

    JustYield(currentThread->getThreadID());
}

//----------------------------------------------------------------------
// ThreadExercise3Test
//	Simulate producer-customer problem by ondition value.
//----------------------------------------------------------------------

#define	USE_COND

#ifdef USE_COND
Condition *cv_full = new Condition("cv_producer");
Condition *cv_empty = new Condition("cv_consumer");
Lock *lock_cv_pc = new Lock("lock_cv_pc");
int cv_fillcount = 0;
int cv_emptycount = 5;
void producer_cv_lock(int arg)
{
    while(arg--)
    {
        lock_cv_pc->Acquire();
        while(cv_emptycount == 0)  //buffer is full
        {
            printf("Buffer is full! Waiting for an empty space\n");
            cv_full->Wait(lock_cv_pc);
        }
        cv_fillcount++;
        cv_emptycount--;
        printf("%s_cv: produce an item.", currentThread->getName());
        printf("\t%d items in buffer\n", cv_fillcount);

        cv_empty->Signal(lock_cv_pc);
        threadManager->listThreadStatus();
        lock_cv_pc->Release();
    }
}

void consumer_cv_lock(int arg)
{
    while(arg--)
    {
        lock_cv_pc->Acquire();
        while(cv_fillcount == 0)  //buffer is empty
        {
            printf("Buffer is empty! Waiting for an item\n");
            cv_empty->Wait(lock_cv_pc);
        }
        cv_fillcount--;
        cv_emptycount++;
        printf("%s_cv: consume an item.", currentThread->getName());
        printf("\t%d items left\n", cv_fillcount);

        cv_full->Signal(lock_cv_pc);
        threadManager->listThreadStatus();
        lock_cv_pc->Release();
    }
}

void producer_consumer_cv_lock()
{
    Thread *tproducer = threadManager->createThread("producer1");
    Thread *tconsumer = threadManager->createThread("consumer1");
    Thread *tproducer2 = threadManager->createThread("producer2");
    Thread *tconsumer2 = threadManager->createThread("consumer2");
    tproducer->setPriority(5);
    tconsumer->setPriority(10);
    tproducer2->setPriority(20);
    tconsumer2->setPriority(15);
    threadManager->listThreadStatus();
    tproducer->Fork(producer_cv_lock, 10);
    tconsumer->Fork(consumer_cv_lock, 5);
    tproducer2->Fork(producer_cv_lock, 5);
    tconsumer2->Fork(consumer_cv_lock, 10);
    threadManager->listThreadStatus();
}
#endif

void
ThreadExercise3Test()
{
#ifdef USE_COND
    // 1. set up semaphore of buffer
    // 2. fork producer and customer thread
    // 3. begin to schedule
    DEBUG('t', "Entering ThreadExercise3Test");

    producer_consumer_cv_lock();
#else
#endif
}

//----------------------------------------------------------------------
// ThreadExercise4Test
//	Simulate producer-customer problem by semaphore value.
//----------------------------------------------------------------------

#define	USE_SEMA

#ifdef USE_SEMA
Semaphore *mutex = new Semaphore("mutex", 1);
Semaphore *fillcount = new Semaphore("fillcount", 0);
Semaphore *empty = new Semaphore("empty", 5);

void producer_semaphore(int arg)
{
    while(arg--)
    {
        //produce an item
        printf("%s: produce an item.\n", currentThread->getName());
        empty->P();//wait for an empty space
        mutex->P();//wait for mutex
        printf("%s: put item into buffer.\n", currentThread->getName());
        fillcount->V();
        mutex->V();
        printf("***%d items in buffer***\n", fillcount->GetValue());
    }
}

void consumer_semaphore(int arg)
{
    while(arg--)
    {
        fillcount->P();
        mutex->P();
        //get an item from buffer
        printf("%s: get an item from buffer.\n", currentThread->getName());
        empty->V();
        mutex->V();
        //consume this item
        printf("%s: consume an item.\n", currentThread->getName());
        printf("***%d items left***\n", fillcount->GetValue());
    }
}

void producer_consumer_semaphore()
{
    /**
     * Producer/consumer problem
     */
    //using semaphore
    Thread *sema_producer1 = threadManager->createThread("s_producer1");
    Thread *sema_consumer1 = threadManager->createThread("s_consumer1");
    Thread *sema_producer2 = threadManager->createThread("s_producer2");
    Thread *sema_consumer2 = threadManager->createThread("s_consumer2");
    sema_producer1->setPriority(5);
    sema_consumer1->setPriority(10);
    sema_producer2->setPriority(20);
    sema_consumer2->setPriority(15);
    sema_producer1->Fork(producer_semaphore, 10);
    sema_consumer1->Fork(consumer_semaphore, 5);
    sema_producer2->Fork(producer_semaphore, 5);
    sema_consumer2->Fork(consumer_semaphore, 10);
}
#endif

void
ThreadExercise4Test()
{
#ifdef USE_SEMA
    // 1. set up semaphore of buffer
    // 2. fork producer and customer thread
    // 3. begin to schedule
    DEBUG('t', "Entering ThreadExercise3Test");

    producer_consumer_semaphore();
#else
#endif
}


//----------------------------------------------------------------------
// ThreadTest
// 	Invoke a test routine.
//----------------------------------------------------------------------

void
ThreadTest()
{
    switch(testnum)
    {
            // Exercise 1:Thread ID and user ID
        case 1:
            ThreadExercise1Test();
            break;
            // Exercise 2:Thread-Status command and priority scheduling
        case 2:
            ThreadExercise2Test();
            break;
            // Exercise 3:Producer-Customer problem with condition value
        case 3:
            ThreadExercise3Test();
            break;
            // Exercise 4:Producer-Customer problem with semaphore value
        case 4:
            ThreadExercise4Test();
            break;

        default:
            printf("No test specified.\n");
            break;
    }
}

