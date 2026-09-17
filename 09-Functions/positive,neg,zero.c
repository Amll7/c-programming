#include<stdio.h>

    void func(int num)
    {
        if (num>0)
        {
            printf("positive number");
        }
        else if(num<0)
        {
            printf("negative number");
        }
        else
        {
            printf("zero");
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