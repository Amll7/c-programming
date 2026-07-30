#include<stdio.h>
int main()
{
    char choice;
    int a,b;
    printf("enter the operation:");
    scanf("%c",&choice);

    printf("enter the numbers:");
    scanf("%d %d",&a,&b);
    switch (choice)
    {
        case '+' :
        printf("sum is %d",a+b);
        break;
        case '-':
        printf("difference is %d",a-b);
        break;
        
        case '*':
        printf("product is %d",a*b);
        break;
        
        case '/':
        printf("division is %d",a/b);
        break;
        
        default : 
        printf("invalid operation!");
    }
    return 0;
    
}