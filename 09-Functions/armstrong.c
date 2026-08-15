#include<stdio.h>
int func(int num)
{
    int rem,cube,sum=0;
    while (num>0)
    {
        rem=num%10;
        cube=rem*rem*rem;
        sum=sum+cube;
        num=num/10;
    }
    return sum;
}
int main()
{
    int result,num,temp;
    printf("Enter the number:");
    scanf("%d",&num);
    temp=num;
    result=func(num);
    if (result==temp)
    {
        printf("The number is armstrong");

    }
    else
    {
    printf("The number is not armstrong");
    }
    return 0;
}