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
    int larg=arr[0];
    int ret= func(arr,size,larg);
    printf("largest is %d",ret);
}
int func(int arr[],int size,int larg)
{
    static int i=0;
    if(i==size)
    {
        return larg;
    }
    if (larg<arr[i])
    {
        larg=arr[i];
        i++;
        return func(arr,size,larg);
    }
    else
    {
        i++;
        return func(arr,size,larg);
    }
}
