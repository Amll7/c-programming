#include<stdio.h>
#define SETN(num,n)(num|((1<<n)-1))
int main()
{
    int num=1;
    int n=4;
    printf("%d",SETN(num,n));
}