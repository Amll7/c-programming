#include<stdio.h>
int func(int num,int count)
{
    int rem,power,sum=0,i;
    while (num>0)
    {
        rem=num%10;
        power=1;
        for(i=1;i<=count;i++)
        {
            power=power*rem;
        }
        sum=sum+power;
        num=num/10;
    }
    return sum;
}
int main()
{
    int result,num,temp,temp1,count=0;
    printf("Enter the number:");
    scanf("%d",&num);
    temp=num;
    temp1=num;
    while(temp1>0)
    {
        count++;
        temp1=temp1/10;
    }
    result=func(num,count);
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