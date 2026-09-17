#include <stdio.h>

void func(int n)
{
    if(n == 1)
    {
        printf("1 ");
    }
    else
    {
        func(n - 1);
        printf("%d ", n);
    }
}

void down(int n)
{
    if(n == 0)
    {
        return;
    }
    else
    {
        printf("%d ", n);
        down(n - 1);
    }
}

int main()
{
    func(10);
    down(9);

    return 0;
}