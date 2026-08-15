#include<stdio.h>
int func(int num)
{
    int sum=0,rem,fact=1,i,temp;
    temp=num;
    while (num>0)
    {
        fact=1;
        rem=num%10;
        for(i=1;i<=rem;i++)
        {
        fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
    }
    if(temp==sum)
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
    int result,num;
    printf("Enter the number:");
    scanf("%d",&num);
    result=func(num);
    printf("%d",result);
    return 0;
}