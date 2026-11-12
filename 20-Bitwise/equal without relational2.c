#include <stdio.h>
int main()
{
    int num,num1;
    printf("Enter the num:");
    scanf("%d",&num);
    printf("Enter the num:");
    scanf("%d",&num1);
    if(num^num1)
    {
        printf("Not Equal");
    }
    else
    {
        printf("Equal");
    }
    
}