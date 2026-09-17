#include<stdio.h>
int func(int [],int,int);
int main()
{
    int size,i;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int small=arr[0];
    int ret= func(arr,size,small);
    printf("smallest is %d",ret);
}
int func(int arr[],int size,int small)
{
    static int i=0;
    if(i==size)
    {
        return small;
    }
    if (small>arr[i])
    {
        small=arr[i];
        i++;
        return func(arr,size,small);
    }
    else
    {
        i++;
        return func(arr,size,small);
    }
}
