#include<stdio.h>
int main()
{
    int size,i,j=0;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size],arr1[size];
    printf("Enter the elements of the array:");
    for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<size;i++)
{
    if (arr[i]<0 || arr[i]>0)
    {
       arr1[j]=arr[i];
       j++;
    }

}
for(i=0;i<size;i++)
{
    if (arr[i]==0)
    {
       arr1[j]=arr[i];
       j++;
    }

}
for(i=0;i<size;i++)
{
    printf("%d ",arr1[i]);
}
return 0;
}
