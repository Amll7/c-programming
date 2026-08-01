#include<stdio.h>
int main()
{
    int i,num;
    for(;;i++)
    {
        printf("enter the number:");
        scanf("%d",&num);
    
    if (num%2==0)
    {
        printf("first even number found");
        break;
    }
}
    return 0;
}