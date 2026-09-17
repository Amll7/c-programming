#include<stdio.h>
int func(int,int);
int main()
{
    int n,rev=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int ret=func(n,rev);
    printf("reversed number is %d",ret);
    
    
}
int func(int a,int rev)
{
    if(a==0)
    {
        return rev;
    }
    else
    {
        rev=(rev*10)+a%10;
        return func(a/10,rev);

    }
}
