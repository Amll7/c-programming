#include<stdio.h>
void func(int num)
{
    int i,sum=0;
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if (sum==num)
    {
        printf("ITS A PERFECT NUMBER");
    }
    else
    {
        printf("NOT A PERFECT NUMBER");
    }
}
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    func(num);
    return 0;
}