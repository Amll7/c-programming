#include<stdio.h>
int fact(int num)
{
    int fact1=1,i;
    for(i=1;i<=num;i++)
    {
    fact1=fact1*i;
    }
    return fact1;
}
int main()
{
    int result,num;
    printf("Enter the number:");
    scanf("%d",&num);
    result=fact(num);
    printf("%d",result);
    return 0;
}