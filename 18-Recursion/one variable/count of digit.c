#include<stdio.h>
int func(int,int);
int main()
{
    int n,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int ret=func(n,count);
    printf("no of digits is %d",ret);
    
    
}
int func(int a,int count)
{
    if(a==0)
    {
        return count;
    }
    else
    {
        return func(a/10,count+1);

    }
}
