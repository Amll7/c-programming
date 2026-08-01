#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 variables a and b:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a = %d ",a);
    printf("b = %d ",b);
    return 0;
}