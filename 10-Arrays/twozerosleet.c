#include<stdio.h>
int main()
{
    int size,i,j,temp=0;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array:");
    for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<size;i++)
{
    if(arr[i]==0)
    {
        for(j=i+1;j<size;j++)
        {
            if (arr[j]!=0)
            {
                 temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
                 break;
            }
        }
    }
}
 for(i=0;i<size;i++)
{
    printf("%d",arr[i]);
}
return 0;
}