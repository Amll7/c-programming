//finding the element that is repeating only one time in an array
#include<stdio.h>
void repeat(int arr[],int size);
int main()
{
int i,size;
printf("Enter the size of the array:");
scanf("%d",&size);
int arr[size];
printf("Enter the elements of the array:");
for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
repeat(arr,size);
}
void repeat(int arr[],int size)
{
int i,count,j;
for(i=0;i<size;i++)
{
    count=0;
    for(j=0;j<size;j++)
    {
        if(arr[i]==arr[j])
        {
            count++;
        }
    }
    if(count==1)
    {
        printf("%d repeats only one time\n",arr[i]);
    }
}

}