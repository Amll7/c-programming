#include<stdio.h>
int main()
{
    double num;
    printf("Enter a number:");
    scanf("%lf",&num);
    double *ptr;
    ptr=&num;
    printf("The value is %lf",*ptr);
    return 0;
}