#include<stdio.h>
#define CLEARN(num,n)(num&(~((1<<n)-1)))
int main()
{
    int num=10;
    int n=3;
    printf("%d",CLEARN(num,n));
}