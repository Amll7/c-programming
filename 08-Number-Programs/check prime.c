#include<stdio.h>
int main()
{
    int num,i=2;
    printf("enter a number :");
    scanf("%d",&num);
    while (i<=num/2)
    {
        if (num%i==0)
        printf("The number is not prime ");
        i++;
    }
    printf("The number is prime");
    return 0;
}