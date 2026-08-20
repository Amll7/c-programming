#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int *ptr;
    ptr=&num;
    printf("The adress of p is %p\n",ptr);
    printf("The value is %d\n",*ptr);
    *ptr=*ptr+40;
    printf("The value is %d",num);
    return 0;
}