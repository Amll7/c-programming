#include<stdio.h>
int main()
{
    int size,i;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of array:");
    for (i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
    int left=0;
    int right=size-1;
    while(left<right)
    {
        if(arr[left] != arr[right])
        {
            printf("Array is not palindrome");
            return 0;
        }
        right--;
        left++;
    }
    printf("Array is palindrome");
    return 0;
}