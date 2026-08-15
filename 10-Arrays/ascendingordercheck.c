#include<stdio.h>
int main()
{
    int size,count=0,i;
    printf("Enter the size of the array");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements");
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<size-1;i++)
    {
        if (arr[i]<arr[i+1])
        {
            count++;
        }

    }
    if (count==size-1)
    {
    printf("THE ARRAY IS IN ACSENDING ORDER");
    }
    else
    {
        printf("THE ARRAY IS NOT IN ACSENDING ORDER");
    }
     return 0;
}