#include<stdio.h>
void func(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int i,size;
    printf("Enter the size");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements");
     for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    func(arr,size);
    return 0;
}