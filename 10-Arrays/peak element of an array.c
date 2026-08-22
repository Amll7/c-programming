#include<stdio.h>
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
for(i=1;i<size-1;i++)
{
  if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
  {
    printf("%d is a peak element\n",arr[i]);
  }
}
return 0;
}