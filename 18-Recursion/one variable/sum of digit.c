#include<stdio.h>
int func(int,int);
int main()
{
    int n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int ret=func(n,sum);
    printf("sum of digits is %d",ret);
    
    
}
int func(int a,int sum)
{
    if(a==0)
    {
        return sum;
    }
    else
    {
        sum=sum+a%10;
        return func(a/10,sum);

    }
}
