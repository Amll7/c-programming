#include<stdio.h>
int main()
{
int size,i,sum1,sum2=0,j,flag=0;
printf("Enter the size of the array:");
scanf("%d",&size);
int arr[size];
printf("Enter the elements of the array:");
for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
sum1=arr[0];
for(i=1;i<size;i++)
{
sum2=sum2+arr[i];
}
for(j=1;j<size;j++)
{
sum2=sum2-arr[j];
if(sum1==sum2)
{
    printf("Eq index: %d",j);
    flag=1;
    break;
}
sum1 = sum1+arr[j];

}
if (flag==0)
{
    printf("No equilibrium index present");
}

return 0;
}