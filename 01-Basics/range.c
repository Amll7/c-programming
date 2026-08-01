#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num>50 && num<70)
    {
    printf("number is in range");
    }
    else
    {
     printf("number is not in range"); 
    }
    return 0;
}