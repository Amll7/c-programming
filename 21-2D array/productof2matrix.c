#include<stdio.h>
int main()
{
    int row,coloumn,i,j,product=0;
    int sum1=0;
    int row1,coloumn1;
    printf("Enter the num of the array:");
    scanf("%d",&row);
    printf("Enter the num of elements in the array:");
    scanf("%d",&coloumn);
    int arr[row][coloumn];
    printf("Enter the num of the next  array:");
    scanf("%d",&row1);
    printf("Enter the num of elements in the next array:");
    scanf("%d",&coloumn1);
    int arr1[row1][coloumn1];
    printf("Enter the elements of the 2D array:");

    for(i=0;i<row;i++)
{
  for(j=0;j<coloumn;j++)
  {
    scanf("%d",&arr[i][j]);
  }
}
printf("Enter the elements of the 2D next array:");

    for(i=0;i<row1;i++)
{
  for(j=0;j<coloumn1;j++)
  {
    scanf("%d",&arr1[i][j]);
  }
}
for(i=0;i<row;i++)
{
  for(j=0;j<coloumn1;j++)
  { 
  sum1=0;
  for(int k=0;k<coloumn;k++)
  {
  product=arr[i][k]*arr1[k][j];
  sum1=sum1+product;
  }
  printf("%d ",sum1);
  }
   
}
return 0;
}


