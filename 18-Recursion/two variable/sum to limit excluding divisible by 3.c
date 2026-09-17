#include<stdio.h>
int func(int,int);
int main()
{
    int num,sum=0,ret;
    printf("Enter the number:");
    scanf("%d",&num);
    ret=func(num,sum);
    printf("sum is %d",ret);
}

int func(int num,int sum)
{
    if (num<=0)
    {
        return sum;
    }
    if(num%3!=0)
    {
    sum=sum+num;
    return func(num-1,sum);
    }
    else
    {
        return func(num-1,sum);
    }
}