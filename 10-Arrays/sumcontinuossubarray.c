#include<stdio.h>
int main()
{
  int sum=0,i,size,size2,num,k,j,flag=1;
  printf("Enter the size:");
  scanf("%d",&size);
  printf("Enter the size of sub array:");
  scanf("%d",&size2);
  int arr[size];
  printf("Enter the elements of the array:");
   for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the max sum:");
    scanf("%d",&num);
    for (i=0;i<=size-size2;i++)
    {
        sum=0;
        for (j=i;j<=i+(size2-1);j++)
        {
            sum=sum+arr[j];
            if (sum==num)
            {
                flag=0;
            for (k=i;k<=i+(size2-1);k++)
            {
                printf("%d ",arr[k]);
            }
            printf("\n");
            }
        }
        
    }
    if (flag=1)
    {
        printf("No sub array present ");
    }
    return 0;
}