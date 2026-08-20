#include<stdio.h>
int main()
{
    float num;
    printf("Enter a number:");
    scanf("%f",&num);
    float ptr;
    ptr=&num;
    printf("The adress of p is %p\n",ptr);
    printf("The value is %f",*ptr);
    return 0;
}