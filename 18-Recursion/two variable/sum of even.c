#include<stdio.h>
int func(int,int);
int main()
{
    int num,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    int ret=func(num,sum);
    printf("sum is %d",ret);
}

int func(int num,int sum)
{
    if (num==0)
    {
        return sum;
    }
    sum=sum+num;
    return func(num-2,sum);
}