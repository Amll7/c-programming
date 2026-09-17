#include<stdio.h>
int func(int [],int,int);
int main()
{
    int size,i,sum=0;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ret= func(arr,size,sum);
    printf("Sum is %d",ret);
}
int func(int arr[],int size,int sum)
{
    static int i=0;
    if(i==size)
    {
        return sum;
    }
    sum=sum+arr[i];
    i++;
    return func(arr,size,sum);
}
