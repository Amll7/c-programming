#include<stdio.h>
int main()
{
    int size,i,j,sum;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of array:");
    for (i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Enter the sum:");
    scanf("%d",&sum);
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
            {
                if(arr[i]+arr[j]==sum)
                {
                    printf("(%d,%d)",arr[i],arr[j]);
                    
                }
                
            } 
                
        
        
    }
    return 0;
}       