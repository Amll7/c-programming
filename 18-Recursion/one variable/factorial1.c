#include<stdio.h>
int func(int,int);
int main()
{
    int n,ret,fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    ret=func(n,fact);
    printf("factorial is %d",ret);
    
}
int func(int a,int fact)
{
    if(a==0)
    {
        return fact;
    }
    else
    {
       fact=fact*a;
       func(a-1,fact);
    }
}