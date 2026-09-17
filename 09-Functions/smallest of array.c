//finding the smallest element of the array
#include<stdio.h>
void smallest(int arr[],int size);
int main()
{
int i,size;
printf("Enter the size of the array:");
scanf("%d",&size);
int arr[size];
printf("Enter the elements of the array:");
for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
smallest(arr,size);
}
void smallest(int arr[],int size)
{
    int i,smallest;
    smallest=arr[0];
    for(i=0;i<size;i++)
{
    if(arr[i]<smallest)
    {
        smallest=arr[i];
    }
}
    printf("smallest is %d",smallest);
}