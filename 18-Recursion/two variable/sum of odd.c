#include<stdio.h>
int func(int,int);
int main()
{
    int num,sum=0,ret;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num%2==1)
    {
    ret=func(num,sum);
    }
    else
    {
    ret=func(num-1,sum); 
    }
    printf("sum is %d",ret);
}

int func(int num,int sum)
{
    if (num<0)
    {
        return sum;
    }
    sum=sum+num;
    return func(num-2,sum);
}