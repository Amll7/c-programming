#include<stdio.h>
int main()
{
int size,i,flg=1;
printf("Enter the size of the array:");
scanf("%d",&size);
int arr[size];
printf("Enter the elements of the array:");
for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
if(arr[0]>arr[1])
{
for(i=0;i<size-2;i++)
{
    if(i%2==0)
    {
        if((arr[i]<arr[i+1]))
        {
            flg=0;
            break;
        }
    }
    
}
}
else 
{
for(i=0;i<size-2;i++)
{
    if(i%2==0)
    {
        if(!(arr[i]>arr[i+1]))
        {
            flg=0;
            break;
        }
    }
}
}
if (flg)
{
    printf("wave");

}
else
{
printf("not wave");
}

return 0;
}