#include<stdio.h>

    int func(int num)
    {
        if (num%2==0)
        {
            return 0;
        }
        else 
        {
            return 1;
        }
    }

    int main()
    {
        int num,result;
        printf("Enter the number:");
        scanf("%d",&num);
        result=func(num);
        if (result==0)
        {
            printf("EVEN");
        }
        else
        {
            printf("ODD");
        }
        return 0;
    }