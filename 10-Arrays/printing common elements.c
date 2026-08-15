#include<stdio.h>
int main()
{
    int size1,size2,i,j;
    printf("Enter the size of the array1:");
    scanf("%d",&size1);
    printf("Enter the size of the array2:");
    scanf("%d",&size2);
    int arr1[size1],arr2[size2];
    printf("Enter the elements of the array 1:");
    for (i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of the array 2:");
    for (i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
     for (i=0;i<size1;i++)
     {
        for (j=0;j<size2;j++)
        {
            if (arr1[i]==arr2[j])
            {
                printf("%d ",arr1[i]);
                break;
            }

        }
     }
     return 0;
    
}