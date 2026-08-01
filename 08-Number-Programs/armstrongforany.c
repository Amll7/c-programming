#include<stdio.h>
int main()
{
    int rem,count=0,i;
    int n,num,sum=0,power=1,temp;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    num = n;
    while(n>0)
    {
        n = n/10;
        count++;
    }
    while (num>0)
    {
        rem = num%10;
        for (i=1;i<=count;i++)
        {
    
        power = power*rem;
        }
        sum = sum + power;
        power=1;
        num = num /10;
    }
    if (sum == temp)

     printf("number is armstrong");
    else
     printf("number is not armstrong");
    return 0;
}