#include<stdio.h>
int main()
{
int size,i,sum=0,esum=0,count=0;
printf("Enter the size of the array:");
scanf("%d",&size);
int arr[size];
printf("Enter the elements of the array:");
for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
count=arr[0];
for(i=0;i<size;i++)
{
sum=sum+arr[i];
}
for(i=1;i<=size+1;i++)
{
esum=esum+count;
count++;
}
printf("missing element is %d",esum-sum);
return 0;
}