#include<stdio.h>
int main()
{
    int num1,num2,temp;
    printf("Enter a number1:");
    scanf("%d",&num1);
    printf("Enter a number2:");
    scanf("%d",&num2);
    //assigning adress to pointer
    int *ptr,*ptr1;
    ptr=&num1;
    ptr1=&num2;

    //swaping
    temp=*ptr;
    *ptr=*ptr1;
    *ptr1=temp;

    //print swapped values
    printf("The value is %d\n",num1);
    printf("The value is %d",num2);
    return 0;
}