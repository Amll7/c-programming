#include<stdio.h>
int func(int,int);
int main()
{
    int num,num1,ret;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the number:");
    scanf("%d",&num1);
    ret=func(num,num1);
    printf("gcd is %d",ret);
}

int func(int num,int num1)
{
    int rem;
    if (num1==0)
    {
        return num;
    }
    rem=num;
    num=num1;
    num1=rem%num1;
    return func(num,num1);
    
}
    
