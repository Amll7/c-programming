#include<stdio.h>
int func(int num)
{
    int sum=0,rem;
    while (num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    return sum;
}
int main()
{
    int result,num;
    printf("Enter the number:");
    scanf("%d",&num);
    result=func(num);
    printf("sum of digits are %d",result);
    return 0;
}