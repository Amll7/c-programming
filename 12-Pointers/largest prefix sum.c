#include<stdio.h>
void func(int arr[],int size);
int main()
{
    int i,size;
    printf("Enter the array size");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
    func(arr,size);
}
void func(int arr[],int size)
{
    int i;
    for(i=1;i<size;i++)
    {
        arr[i]=arr[i]+arr[i-1];
    }
    int largest=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    printf("largest prefix sum is %d",largest);
}
