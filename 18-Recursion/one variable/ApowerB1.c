#include<stdio.h>
int func(int,int,int);
int main()
{
    int n,ret,b,power=1;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the number:");
    scanf("%d",&b);
    ret=func(n,b,power);
    printf("result is %d",ret);
    
}
int func(int a, int b,int power)
{
    if(b == 0)
    {
        return power;
    }
    else
    {
        power=power*a;
        return func(a, b - 1,power);
    }
}