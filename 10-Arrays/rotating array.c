#include<stdio.h>
int main()
{
    int size,i,temp;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array:");
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
    temp=arr[0];
    for(i=0;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[size-1]=temp;
     for (i=0;i<size;i++)
    {
        printf("%d ",arr[i]);

    }
    return 0;
}