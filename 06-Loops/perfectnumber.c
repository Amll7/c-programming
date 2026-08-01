#include<stdio.h>
int main()
{
    int num,i,sum=0;;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Error : Invalid input,Enter only positive number");
        return 0;
    }
    for (i=1;i<=num/2;i++)
    {
        if (num%i==0)
        {
            sum = sum + i;
        
        }
        
    }
    if (sum == num)
    {
    printf("yes,entered number is perfect number");
    }
    else
    
    printf("No,entered number is not a perfect number");
    
    return 0;
}