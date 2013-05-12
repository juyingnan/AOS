#include "syscall.h"
void test()
{
    Create("TEST");
    Yield();
}

int
main()
{
    Fork(test);
    Create("TEST");
    Yield();
    Exit();
}
