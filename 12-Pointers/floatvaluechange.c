#include<stdio.h>
void change(float *ptr)
{
    *ptr=*ptr+25;
}
int main()
{
    float num;
    printf("Enter a number:");
    scanf("%f",&num);
    float *ptr;
    ptr=&num;
    printf("The adress of ptr is %p\n",ptr);
    change(ptr);
    printf("The value is %f",num);
    return 0;
}