#include<stdio.h>
int main()
{
    int arr1[5],i,found;
    printf("enter the values of array:");
    for (i=0;i<5;i++)
    {
    scanf("%d",&arr1[i]);
    }
    printf("enter the value to be found:");
    scanf("%d",&found);

    for (i=0;i<5;i++)
{
    if (arr1[i]==found)
    {
    printf("The value is present in the array");
    return 0;
    }
}
    
printf("The value is not present in the array");
return 0;
}