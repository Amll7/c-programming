#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter a number1:");
    scanf("%d",&num1);
    printf("Enter a number2:");
    scanf("%d",&num2);
    //assigning adress to pointer
    int *ptr,*ptr1;
    ptr=&num1;
    ptr1=&num2;

    //sum
   int sum = *ptr+*ptr1;

    //print sum
    printf("The sum is %d\n",sum);
    
    return 0;
}