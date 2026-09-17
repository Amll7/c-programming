#include<stdio.h>
int func(int,int);
int main()
{
    int n,small;
    printf("Enter the number:");
    scanf("%d",&n);
    small=n%10;
    int ret=func(n,small);
    printf("smallest digit is %d",ret);
    
    
}
int func(int a,int smallest)
{
    if(a==0)
    {
        return smallest;
    }
    else
    {
        if(smallest>(a%10))
        {
            smallest=a%10;
            return func(a/10,smallest);
        }
        else
        {
            return func(a/10,smallest);
        }

    }
}
