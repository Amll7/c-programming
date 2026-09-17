#include<stdio.h>

    void func(int x,int y)
    {
        int power=1;
        for(int i=0;i<=y;i++)
        {
           printf("%d ",power);
           power=power*x;
        }
    
    }

    int main()
    {
        int num,y;
        printf("Enter the number:");
        scanf("%d",&num);
        printf("Enter the power:");
        scanf("%d",&y);
        func(num,y);
        return 0;
    }