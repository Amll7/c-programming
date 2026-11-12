#include<stdio.h>
int main()
{
    int size=5,i,j;
    int flag=0;
    printf("Enter the array elements:");
    int arr[size];
    for(i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        flag=0;
        for(j=i+1;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                arr[i]=arr[j];
                flag=1;
                break;
            }
        }

         if(flag==0)
         {
                arr[i]=-1;
         }

    }
    arr[size-1]=-1;
    for(i=0;i<size;i++)
    {
    printf("%d ",arr[i]);
    }

}