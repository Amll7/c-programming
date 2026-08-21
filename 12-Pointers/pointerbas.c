#include<stdio.h>
    int func(int *ptr)
    {
        *ptr=*ptr+1;

    }
    int main()
    {
        int num;
        printf("Enter the num");
        scanf("%d",&num);
        printf("%d\n",num);
        func(&num);
        printf("%d",num);
        return 0;
    }
