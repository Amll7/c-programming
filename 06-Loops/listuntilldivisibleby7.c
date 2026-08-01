#include<stdio.h>
int main ()
{
    int i;
    for (i=1;i<=100;i++)
    {
        printf(" %d ",i);
        if (i%7==0)
        break;
    

    }
    return 0;
}