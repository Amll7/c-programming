#include<stdio.h>
int main ()
{
    int i=1;
    while (i<=100)
    {
        printf(" %d ",i);
        if (i%7==0)
        break;
        i++;
    }
    return 0;
}