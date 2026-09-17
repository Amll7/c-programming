#include<stdio.h>

    void func(int num)
    {
        int power=1;
        for(int i=0;i<=num;i++)
        {
           printf("%d ",power);
           power=power*2;
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