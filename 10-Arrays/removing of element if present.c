#include<stdio.h>
int main()
{
    int size1,i,num,j;
    printf("Enter the size of the array:");
    scanf("%d",&size1);
    int arr[size1];
    for (i=0;i<size1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number should be checked:");
    scanf("%d",&num);  
    for (i=0;i<size1-1;i++)
    {
       if (arr[i]==num)
       {
        for(j=i;j<size1-1;j++)
        {
            arr[j]=arr[j+1];
        }
         size1--;
       }
    }
      for (i=0;i<size1;i++)
      {
        printf("%d ",arr[i]);
      }
      return 0;
    
    
}