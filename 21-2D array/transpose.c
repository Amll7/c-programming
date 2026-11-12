#include<stdio.h>
int main()
{
    int row,coloumn,i,j;
    int k=0,l=0;
    printf("Enter the num of the array:");
    scanf("%d",&row);
    printf("Enter the num of elements in the array:");
    scanf("%d",&coloumn);
    int arr[row][coloumn];
    printf("Enter the elements of the 2D array:");

for(i=0;i<row;i++)
{
  for(j=0;j<coloumn;j++)
  {
    scanf("%d",&arr[i][j]);
  }
}
int arr1[coloumn][row];
for(i=0;i<coloumn;i++)
{
  for(j=0;j<row;j++)
  {
    
      arr1[i][j]=arr[j][i];
  
  }
}
for(i=0;i<coloumn;i++)
{
  for(j=0;j<row;j++)
  {
    printf("%d ",arr1[i][j]);
  }
  printf("\n");
}
}
