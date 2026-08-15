#include<stdio.h>
int main()
{
int size,i,j,flag=0;
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
   flag=0;
   for(j=i+1;j<size;j++)
   {
    if (arr[i]<arr[j])
    {
    printf("%d ",arr[j]);
    flag=1;
    break;
    }
   }



if(flag==0)
{
printf("-1 ");
}
}
return 0;
}
