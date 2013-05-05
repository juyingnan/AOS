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
#include "ts.h"
#include "synch.h"

// testnum is set in main.cc
int testnum = 7;
Ts *ts1 = new Ts();


//Added by Ju Yingnan
//2013-3-21
Condition *cv_full = new Condition("cv_producer");
Condition *cv_empty = new Condition("cv_consumer");
Lock *lock_cv_pc = new Lock("lock_cv_pc");
int cv_fillcount = 0;
int cv_emptycount = 5;

Semaphore *mutex = new Semaphore("mutex", 1);
Semaphore *fillcount = new Semaphore("fillcount", 0);
Semaphore *empty = new Semaphore("empty", 5);

Barrier b("test", 3);

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

    for (num = 0; num < 5; num++)
    {
        printf("*** thread %d looped %d times\n", which, num);
        currentThread->Yield();
    }
}


//----------------------------------------------------------------------
// SimpleThread2
//  Added by Ju Yingnan
//  2013-3-17
// 	Loop 5 times, yielding the CPU to another ready thread
//	each iteration.
//
//	"which" is simply a number identifying the thread, for debugging
//	purposes.
//----------------------------------------------------------------------

void
SimpleThread2(int which)
{
    printf("*** thread %d,\ttid=%3d,uid=%d ***\n", which, currentThread->GetTid(), currentThread->GetUid());
    currentThread->Yield();
}

//----------------------------------------------------------------------
// SimpleThread3
//  Added by Ju Yingnan
//  2013-3-19
// 	Loop 5 times, yielding the CPU to another ready thread
//	each iteration.
//
//	"which" is simply a number identifying the thread, for debugging
//	purposes.
//----------------------------------------------------------------------

void
SimpleThread3(int which)
{
    printf("*** thread %d,\ttid=%3d,uid=%d ***\n", which, currentThread->GetTid(), currentThread->GetUid());
    ts1->PrintThreadInfo();
    currentThread->Yield();
}


void
SimpleThread4(int which)
{
    int num = 0;
    for (num = 0; num < 5; num++)
    {
        printf("*** thread %d looped %d times, priority=%d***\n", which, num, currentThread->getPriority());
    }
}

//Added by Ju Yingnan
//2013-3-21
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
        //ts1->PrintThreadInfo();
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
        //ts1->PrintThreadInfo();
        lock_cv_pc->Release();
    }
}

void producer_consumer_cv_lock()
{
    Thread *tproducer = new Thread("producer1");
    Thread *tconsumer = new Thread("consumer1");
    Thread *tproducer2 = new Thread("producer2");
    Thread *tconsumer2 = new Thread("consumer2");
    tproducer->setPriority(10);
    tconsumer->setPriority(10);
    tproducer2->setPriority(10);
    tconsumer2->setPriority(10);
    tproducer->Fork(producer_cv_lock, 10);
    tconsumer->Fork(consumer_cv_lock, 10);
    tproducer2->Fork(producer_cv_lock, 10);
    tconsumer2->Fork(consumer_cv_lock, 10);
    ts1->PrintThreadInfo();
}

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
        printf("\t%d items in buffer\n", fillcount->GetValue());
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
        printf("\t%d items left\n", fillcount->GetValue());
    }
}

void producer_consumer_semaphore()
{
    /**
     * Producer/consumer problem
     */
    //using semaphore
    Thread *sema_producer1 = new Thread("s_producer1");
    Thread *sema_consumer1 = new Thread("s_consumer1");
    Thread *sema_producer2 = new Thread("s_producer2");
    Thread *sema_consumer2 = new Thread("s_consumer2");
    sema_producer1->setPriority(10);
    sema_consumer1->setPriority(10);
    sema_producer2->setPriority(20);
    sema_consumer2->setPriority(20);
    sema_producer1->Fork(producer_semaphore, 10);
    sema_consumer1->Fork(consumer_semaphore, 10);
    sema_producer2->Fork(producer_semaphore, 10);
    sema_consumer2->Fork(consumer_semaphore, 10);
}

void testBarrierThread(int arg)
{
    Barrier *b = (Barrier *)arg;
    for(int i = 0; i < 6; i++)
    {
        printf("%s prints %d\n", currentThread->getName(), i);
        b->Print();
        b->Wait();
    }
    //printf("testBarrier #%d is running",arg);
}
void testBarrier()
{
    Thread *t1 = new Thread("test1");
    Thread *t2 = new Thread("test2");
    Thread *t3 = new Thread("test3");

    t1->setPriority(10);
    t2->setPriority(20);
    t3->setPriority(30);

    t1->Fork((VoidFunctionPtr)testBarrierThread, (int)&b);
    t2->Fork((VoidFunctionPtr)testBarrierThread, (int)&b);
    t3->Fork((VoidFunctionPtr)testBarrierThread, (int)&b);
}


//----------------------------------------------------------------------
// ThreadTest1
// 	Set up a ping-pong between two threads, by forking a thread
//	to call SimpleThread, and then calling SimpleThread ourselves.
//----------------------------------------------------------------------

void
ThreadTest1()
{
    DEBUG('t', "Entering ThreadTest1");

    Thread *t = new Thread("forked thread");

    t->Fork(SimpleThread, 1);
    SimpleThread(0);
}

//----------------------------------------------------------------------
// ThreadTest2
//    Call fork() to create multiple threads
//    call SimpleThread2
//----------------------------------------------------------------------
void ThreadTest2()
{
    int num = 120;
    int i;
    DEBUG('t', "Entering ThreadTest2");

    for(i = 0; i < num; i++)
    {
        Thread *t = new Thread("t_1");
        t->Fork(SimpleThread2, i + 1);
    }
    for(i = 0; i < num; i++)
    {
        Thread *t = new Thread("t_2");
        t->Fork(SimpleThread2, i + 1);
    }

}

//----------------------------------------------------------------------
// ThreadTest3
//    Test Ts
//    call SimpleThread3
//----------------------------------------------------------------------
void ThreadTest3()
{
    int num = 3;
    int i;
    DEBUG('t', "Entering ThreadTest3");


    Ts *ts = new Ts();

    for(i = 0; i < num; i++)
    {
        Thread *t = new Thread("thread");
        t->Fork(SimpleThread3, i + 1);
    }

    ts->PrintThreadInfo();
}

//----------------------------------------------------------------------
// ThreadTest4
//    Test Priority
//    call SimpleThread4
//----------------------------------------------------------------------
void ThreadTest4()
{
    DEBUG('t', "Entering ThreadTest4");

    Thread *t1 = new Thread("thread1");
    Thread *t2 = new Thread("thread2");
    Thread *t3 = new Thread("thread3");

    t1->setPriority(30);
    t2->setPriority(20);
    t3->setPriority(10);

    t1->Fork(SimpleThread4, 1);
    t2->Fork(SimpleThread4, 2);
    t3->Fork(SimpleThread4, 3);
}

//----------------------------------------------------------------------
// ThreadTest5
//    Test CV_LOCK_CONSUMER_PRODUCER
//    call producer_consumer_cv_lock
//----------------------------------------------------------------------
void ThreadTest5()
{
    DEBUG('t', "Entering ThreadTest5");


    Ts *ts = new Ts();
    ts->PrintThreadInfo();

    producer_consumer_cv_lock();
}

//----------------------------------------------------------------------
// ThreadTest6
//    Test PRODUCER_CONSUMER_SEMAPHORE
//    call producer_consumer_semaphore
//----------------------------------------------------------------------
void ThreadTest6()
{
    DEBUG('t', "Entering ThreadTest6");


    Ts *ts = new Ts();
    ts->PrintThreadInfo();

    producer_consumer_semaphore();
}

//----------------------------------------------------------------------
// ThreadTest7
//    Test BARRIER
//    call testBarrier
//----------------------------------------------------------------------
void ThreadTest7()
{
    DEBUG('t', "Entering ThreadTest6");


    Ts *ts = new Ts();
    ts->PrintThreadInfo();

    testBarrier();
}


//----------------------------------------------------------------------
// ThreadTest
// 	Invoke a test routine.
//----------------------------------------------------------------------

void
ThreadTest()
{
    switch (testnum)
    {
        case 1:
            ThreadTest1();
            break;
        case 2:
            ThreadTest2();
            break;
        case 3:
            ThreadTest3();
            break;
        case 4:
            ThreadTest4();
            break;
        case 5:
            ThreadTest5();
            break;
        case 6:
            ThreadTest6();
            break;
        case 7:
            ThreadTest7();
            break;
        default:
            printf("No test specified.\n");
            break;
    }
}



