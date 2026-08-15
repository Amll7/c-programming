
#include<stdio.h>
int func(int num)
{
    int rev=0,rem,temp;
    temp=num;
    while (num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(temp==rev)
    {
        return 1;
    }
    else
    {
         return 0;
    }
}
int main()
{
    int reverse,num;
    printf("Enter the number:");
    scanf("%d",&num);
    reverse=func(num);
    printf("%d",reverse);
    return 0;
}