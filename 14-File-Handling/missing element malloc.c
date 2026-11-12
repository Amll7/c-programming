#include<stdio.h>
#include<stdlib.h>
int missing(int arr[],int size);
int main()
{
    int size,i;
    printf("enter the size of array:");
    scanf("%d",&size);
    int *arr=malloc(size*sizeof(int));
    {
        if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    }
    printf("enter the elements of array:");
    for (i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
    missing(arr,size);
    free(arr);
    return 0;
}
int missing(int arr[],int size)
{
    int i,j,count;
    for(i=0;i<=size;i++)
    {
        count=0;
        for(j=0;j<size;j++)
        {
            if(arr[j]==i)
            {
                count++;
            }
        }
        if(count==0)
        {
         printf("missing element is %d",i);
         return 0;
        }
    }
}