#include<stdio.h>
int main()
{
    int row,coloumn,i,j,sum1=0;
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

for(i=0;i<row;i++)
{
  for(j=0;j<coloumn;j++)
  { 
  sum1=sum1+arr[i][j];
  }
}
printf("Whole sum:%d ",sum1);

int sum=0;
for(i=0;i<row;i++)
{
  sum=0;
  for(j=0;j<coloumn;j++)
  { 
  sum=sum+arr[i][j];
 // printf("%d\n",sum);
  }
  printf("%d %d\n",i,sum);
}
return 0;
}


