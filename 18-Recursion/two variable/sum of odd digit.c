#include<stdio.h>
int func(int,int,int);
int main()
{
    int num,sum=0,ret,check=0;
    printf("Enter the number:");
    scanf("%d",&num);
    ret=func(num,sum,check);
    printf("sum of even digits is %d",ret);
}

int func(int num,int sum,int check)
{
    if (num==0)
    {
        return sum;
    }
    check=num%10;
    if (check%2!=0)
    {
        sum=sum+check;
        return func(num/10,sum,check);
    }
    else
    {
        return func(num/10,sum,check);
    }
    
}