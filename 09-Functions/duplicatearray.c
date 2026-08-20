#include<stdio.h>
void func(int arr[],int size,int arr1[])
{
    int i,j,k=0;
    for (i=0;i<size;i++)
    {
        int flag=0;
        for (j=0;j<k;j++)
        {
            if (arr[i]==arr1[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            arr1[k]=arr[i];
            k++;
        }
        
    }
    for (i=0;i<k;i++)
    {
        printf("%d ",arr1[i]);
    }
    
}
int main()
{
    int i,size;
    printf("Enter the size");
    scanf("%d",&size);
    int arr[size],arr1[size];
    printf("Enter the elements");
     for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    func(arr,size,arr1);
    return 0;
}