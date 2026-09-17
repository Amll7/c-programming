#include <stdio.h>

int num;

int func_1();

int main()
{
    while (1)
    {
        num++;
        func_1();
    }

    return 0;
}