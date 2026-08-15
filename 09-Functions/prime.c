#include<stdio.h>
int func(int num)
{
int i,count=0;
for (i=1;i<=num;i++)
{
    if(num%i==0)
    {
        count++;
    }
}
if (count==2)
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
    int prime,num;
    printf("Enter the number:");
    scanf("%d",&num);
    prime=func(num);
    printf("%d",prime);
    return 0;
}