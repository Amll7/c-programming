//finding the second smallest element of the array
#include<stdio.h>
void second_smallest(int arr[],int size);
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
second_smallest(arr,size);
}
void second_smallest(int arr[],int size)
{
    int i,smallest,largest=arr[0];
    smallest=arr[0];
    for(i=0;i<size;i++)
{
    if(arr[i]<smallest)
    {
        smallest=arr[i];
    }
    if(arr[i]>largest)
    {
        largest=arr[i];
    }
}
int secondsmallest=largest;
   for(i=0;i<size;i++)
   {
    if(arr[i]>smallest&&arr[i]<secondsmallest)
    {
        secondsmallest=arr[i];
    }
   }
   printf("The second smallest element is %d",secondsmallest);
}