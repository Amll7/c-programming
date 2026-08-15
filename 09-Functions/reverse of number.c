#include<stdio.h>
int func(int num)
{
    int rev=0,rem;
    while (num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    return rev;
}
int main()
{
    int reverse,num;
    printf("Enter the number:");
    scanf("%d",&num);
    reverse=func(num);
    printf("Reversed number is %d",reverse);
    return 0;
}