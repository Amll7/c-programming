#include<stdio.h>
int func(int a,int b)
{
    int i,hcf;
for (i=1;i<=a;i++)
{
    if (a%i==0 && b%i==0)
    {
        hcf=i;
    }
    
}
return hcf;
}

int main()
{
    int a,b,result;
    printf("Enter the smallest number:");
    scanf("%d",&a);
    printf("Enter the largest number:");
    scanf("%d",&b);
    result=func(a,b);
    printf("HCF is %d",result);
    return 0;
}