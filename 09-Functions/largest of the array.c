//finding the elargest element of the array
#include<stdio.h>
void largest(int arr[],int size);
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
largest(arr,size);
}
void largest(int arr[],int size)
{
    int i,largest;
    largest=arr[0];
    for(i=0;i<size;i++)
{
    if(arr[i]>largest)
    {
        largest=arr[i];
    }
}
    printf("Largest is %d",largest);
}