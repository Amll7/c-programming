#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int *ptr;
    ptr=&num;
    printf("The adress of p is %p\n",ptr);
    printf("The value is %d",*ptr);
    return 0;
}