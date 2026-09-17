#include <stdio.h>

int sum(int);

int main()
{
    int n, ret;

    printf("Enter the limit: ");
    scanf("%d", &n);

    ret = sum(n);

    printf("%d", ret);
}

int sum(int a)
{

    if(a == 0)
    {
        return 0;
    }

    return a+sum(a-1);
}