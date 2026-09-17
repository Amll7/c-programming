#include<stdio.h>
int main()
{
    int *p,*q;//this will show wild behaviour
    int x,y,z;
    x=10;
    y=13;
    *p=&x;//*p already trying to dereference garrbage value then assigning adress
    *q=&y;
    z=*p/(*q);
    printf("%d %d %d ",*p,*q,z);
}