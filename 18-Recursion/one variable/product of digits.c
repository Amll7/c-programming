#include<stdio.h>
int func(int,int);
int main()
{
    int n,prod=1;
    printf("Enter the number:");
    scanf("%d",&n);
    int ret=func(n,prod);
    printf("product of digits is %d",ret);
    
    
}
int func(int a,int product)
{
    if(a==0)
    {
        return product;
    }
    else
    {
        product=product*(a%10);
        return func(a/10,product);

    }
}
