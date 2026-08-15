#include<stdio.h>
int func(int num)
{
    int count=0,rem;
    while (num>0)
    {
        count++;
        num=num/10;
    }
    return count;
}
int main()
{
    int result,num;
    printf("Enter the number:");
    scanf("%d",&num);
    result=func(num);
    printf(" number count is %d",result);
    return 0;
}