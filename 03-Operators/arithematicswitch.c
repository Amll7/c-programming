#include <stdio.h>
int main()
{
    int choice,a,b;
    printf("enter the choice:\n");
    scanf("%d",&choice);
    printf("enter the variables:\n");
    scanf("%d %d",&a,&b);
    
    switch (choice)
    {
        case 1 : 
        int sum = a+b;
        printf (" sum is %d",sum);
        break;
        case 2 : 
        int diff = a-b;
        printf (" difference is %d",diff);
        break;
        case 3 : 
        int product = a*b;
        printf (" product is %d",product);
        break;
        case 4 :
        int division = a/b;
        printf (" a divided by b  is %d",division);
        break;

        default : printf("invalid input");
    }
    return 0;

}