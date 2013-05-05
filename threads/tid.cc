/*----------------------------
 *tid.cc
 *created by Ju Yingnan, Lab 1
 *2013-3-17
 ------------------------------*/
#include "tid.h"

static int last_tid=-1;
static BitMap *_tidmap=new BitMap(TID_MAX_DEFAULT);

//TO-DO list
//YRY
int alloc_tidmap()
{
    int current_tid=last_tid+1;

    //if(current_tid>=TID_MAX_DEFAULT)
    //{
    //   printf("tid is %d, out of range\n",current_tid);
    //    return -1;
    //}

    BitMap *tidmap =_tidmap;
    if(!tidmap->NumClear()) //no more clear bits
    {
        printf("No more clear bits!\n");
        return -1;
    }

    int _return = find_next_zero_bit(current_tid%TID_MAX_DEFAULT);

    //_tidmap->Print();
    return _return;
}

void clear_bit(int tid)
{
    _tidmap->Clear(tid);
}

int find_next_zero_bit(int tid)
{
    BitMap *tidmap=_tidmap;
    if(!tidmap->NumClear())
    {
        return -1;
    }

    for(int i=tid,j=0; j<TID_MAX_DEFAULT; i++,j++)
    {
        i=i%TID_MAX_DEFAULT;

        if(!tidmap->Test(i))
        {
            tidmap->Mark(i);
            last_tid=i;
            return i;
        }
    }

    return -1;
}
