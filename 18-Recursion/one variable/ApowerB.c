#include<stdio.h>
int func(int,int);
int main()
{
    int n,ret,power;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the number:");
    scanf("%d",&power);
    ret=func(n,power);
    printf("result is %d",ret);
    
}
int func(int a, int b)
{
    if(b == 0)
    {
        return 1;
    }
    else
    {
        return a * func(a, b - 1);
    }
}