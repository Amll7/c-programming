#include<stdio.h>

    int func(int num)
    {
        for(int i=1;i<=num;i++)
        {
            printf("%d ",i);
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