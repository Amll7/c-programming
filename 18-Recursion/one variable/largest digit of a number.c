#include<stdio.h>
int func(int,int);
int main()
{
    int n,larg=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int ret=func(n,larg);
    printf("largest digit is %d",ret);
    
    
}
int func(int a,int largest)
{
    if(a==0)
    {
        return largest;
    }
    else
    {
        if(largest<(a%10))
        {
            largest=a%10;
            return func(a/10,largest);
        }
        else
        {
            return func(a/10,largest);
        }

    }
}
