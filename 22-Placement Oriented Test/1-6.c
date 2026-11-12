#include<stdio.h>
int main()
{
    int size,i;
    int sumr=0,suml=0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        suml=suml+arr[i];

    }
    for(i=0;i<size;i++)
    {
     suml=suml-arr[i];
     if(suml==sumr)
     {
        printf("Eqlib index : %d",i);
        break;
     }
     sumr=sumr+arr[i];

     
    }
}