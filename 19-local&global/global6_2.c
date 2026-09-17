#include <stdio.h>

extern int num;

int func_1()
{
    printf("num is %d from global2\n", num);

    return 0;
}