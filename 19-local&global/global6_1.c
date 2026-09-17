#include <stdio.h>

int num;

int func_1();
int func_2();

int main()
{
    while (1)
    {
        num++;

        func_1();
        func_2();
    }

    return 0;
}