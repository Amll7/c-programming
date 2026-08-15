#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("Enter the array:");
    for(i=1;i<5;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Arrays are :");
    for(i=-2;i<5;i++)
    {
    printf("%d ",arr[i]);
    }
    return 0;
}