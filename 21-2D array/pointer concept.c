#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    int *ptr1=&arr;
    printf("%d",*(ptr+1));
    printf("%d",*(ptr1+1));
}