#include<stdio.h>
int main()
{
    int *p,*q;//this will show wild behaviour
    int x;
    x=10;
    p=&x;
    q=&x;
    *p+1;
    *q+1;
    printf("%d",x);
}