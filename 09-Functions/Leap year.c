#include<stdio.h>

    int func(int num)
    {
        if (num%4==0)
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
        printf("Enter the year:");
        scanf("%d",&num);
        result=func(num);
        if (result==0)
        {
            printf("LEAP YEAR");
        }
        else
        {
            printf("NOT LEAP YEAR");
        }
        return 0;
    }