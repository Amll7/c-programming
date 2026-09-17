#include<stdio.h>
int func(int);
int main()
{
    int n,ret;
    printf("Enter the number:");
    scanf("%d",&n);
    ret=func(n);
    printf("sum of n natural numbers is %d",ret);
    
}
int func(int a)
{
    if(a==0)
       return 0;
    
        
        return a+func(a-1);
        
    
}