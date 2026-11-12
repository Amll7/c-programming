#include<stdio.h>
#include<stdlib.h>
int palindrome(int arr[],int size)
{
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
}
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
    palindrome(arr,size);
    free(arr);
    return 0;
}