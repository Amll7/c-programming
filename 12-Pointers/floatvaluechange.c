#include<stdio.h>
int main()
{
    float num;
    printf("Enter a number:");
    scanf("%f",&num);
    float *ptr;
    ptr=&num;
    printf("The adress of p is %p\n",ptr);
    printf("The value is %f\n",*ptr);
    *ptr=*ptr+15;
    printf("The value is %f",num);
    return 0;
}