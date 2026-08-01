#include<stdio.h>
int main()
{
    int num,i,power=1;
    printf("Enter the number of terms:");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        
        printf(" %d ",power);
        power = power*2;

    }
    return 0;
}