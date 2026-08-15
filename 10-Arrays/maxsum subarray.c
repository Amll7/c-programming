#include<stdio.h>
int main()
{
  int sum=0,i,size,k,j;
  printf("Enter the size:");
  scanf("%d",&size);
  printf("Enter the size of sub array:");
  scanf("%d",&k);
  int arr[size];
  printf("Enter the elements of the array:");
   for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
   for(i=0;i<k;i++)
   {
    sum =sum+arr[i];
   }
   int max=sum;
   int index=0;
   
   for (i=1;i<=size-k;i++)
   {
   sum=sum-arr[i-1];
   sum =sum+arr[i+k-1];
   if (sum>max)
   {
    max=sum;
    index=i;
   }

   }
   printf("sub array elements are:");
   for (j=index;j<index+k;j++)
    {
        printf("%d ",arr[j]);
        
    }
   printf("\nmax value is %d",max);
   return 0;
}
