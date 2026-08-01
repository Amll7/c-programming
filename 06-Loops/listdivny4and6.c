#include<stdio.h>
int main ()
{
    int i;
    for (i=1;;i++)
    {
        printf(" %d ",i);
        if (i%4==0 && i%6==0)
        break;

    }
    return 0;
}