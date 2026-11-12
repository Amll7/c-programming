#include<stdio.h>
void func(int coloumn,int (*arr)[coloumn],int row)
{
  int sum1;
  int i,j;
  for(i=0;i<row;i++)
{
  for(j=0;j<coloumn;j++)
  { 
  sum1=sum1+arr[i][j];
  }
}
printf("Sum of array elements = %d\n", sum1);
}
int main()
{
    int row,coloumn,i,j;
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
func(coloumn,arr,row);
return 0;
}


