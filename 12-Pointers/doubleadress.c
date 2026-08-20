#include<stdio.h>
int main()
{
    double num;
    printf("Enter a character:");
    scanf("%lf",&num);
    double *ptr;
    ptr=&num;
    printf("The adress of x is %p\n",&num);
    printf("The adress of p is %p\n",ptr);
    printf("The value is %lf",*ptr);
    return 0;
}