/*
 * TS.cc
 *
 *  Created on: 2013-3-19
 *      Author: Ju Yingnan
 */

#include "ts.h"
#include "system.h"

Ts::Ts()
{
    //do nothing
}

Ts::~Ts()
{
    //do nothing
}

void Ts::PrintThreadInfo()
{
	printf("Tid\tUid\tThread Name\t\tStatus\t\tPriority\tSlices\n");
    scheduler->Print();//print the content of readylist.
}
