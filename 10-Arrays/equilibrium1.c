#include<stdio.h>
int main()
{
    int size,i,sum2=0,sum1=0;
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
  sum2=sum2+arr[i];
}
for(i=0;i<size;i++)
{
  sum2=sum2-arr[i];
  if(sum1==sum2)
  {
    printf("eq index is %d",i);
    break;
  }
  else
  {
    sum1=sum1+arr[i];
    
  }
}
return 0;
}
