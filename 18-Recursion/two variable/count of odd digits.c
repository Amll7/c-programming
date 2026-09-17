#include<stdio.h>
int func(int,int,int);
int main()
{
    int num,count=0,ret,check=0;
    printf("Enter the number:");
    scanf("%d",&num);
    ret=func(num,count,check);
    printf("count is %d",ret);
}

int func(int num,int count,int check)
{
    if (num==0)
    {
        return count;
    }
    check=num%10;
    if (check%2==1)
    {
        return func(num/10,count+1, check);
    }
    else
    {
        return func(num/10,count,check);
    }
    
}