#include<stdio.h>
void square(int *,int);
int main()
{
    int size,i;
    printf("Enter the array size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    printf("Array elements before squaring :");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
        
    }
    square(arr,size);
    
    printf("\nArray elements after squaring :");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
        
    }
}
void square(int *ptr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        *(ptr+i)=*(ptr+i)* *(ptr+i);
    }
}