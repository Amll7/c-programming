#include<stdio.h>
void func(int *arr, int size)
{
    int largest=arr[0], seclargest=0, thrlargest=0;

    for(int i=1; i<size; i++)
    {
        if (arr[i]>largest)
        {
            thrlargest=seclargest;   
            seclargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>seclargest)
        {
            thrlargest=seclargest;
            seclargest=arr[i];
        }
        else if(arr[i]<seclargest && arr[i]>thrlargest)
        {
            thrlargest=arr[i];
        }
    }

    printf("largest =%d\n",largest);
    printf("second largest =%d\n",seclargest);
    printf("third largest =%d",thrlargest);
}


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
func(arr,size);
}