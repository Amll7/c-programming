#include <stdio.h>
int main()
{
    int num1,num2,num3;
    printf ("enter 3 numbers");
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1>num2)
    {
        if(num1<num3)
        printf("%d is middle",num1);
        

        if (num2<num3)
        printf("%d is middle",num2);
        
    }
    else
    {
     if (num1>num3)
     printf("%d is middle",num1);
    
     if(num2>num3)
     printf("%d is middle",num3);
     

    }
return 0;
}