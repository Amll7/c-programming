#include<stdio.h>
int main()
{
    int sum=0,i,num;
    printf ("enter the number of terms:");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
    sum = sum +i;
    }
    printf("sum is %d",sum);
    return 0;
}