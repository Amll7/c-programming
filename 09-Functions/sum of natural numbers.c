#include<stdio.h>

    int func(int num)
    {
        int sum=0;
        for(int i=1;i<=num;i++)
        {
           sum=sum+i;
        }
        return sum;
    }

    int main()
    {
        int num,sum;
        printf("Enter the number:");
        scanf("%d",&num);
        sum=func(num);
        printf("Sum of %d natural numbers is %d",num,sum);
        return 0;
    }