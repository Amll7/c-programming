#include<stdio.h>
int main()
{
    int i,size,f=1;
    printf("size");
    scanf("%d",&size);

    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    if(arr[0]>arr[1])
    {

        for(i=1;i<size-1;i++)
        {
            if(i%2==0)
            {
                if(arr[i]<arr[i+1])
                {
                    f=0;
                    break;
                }
            }
            else
            {
                if(arr[i]>arr[i+1])
                {
                    f=0;
                    break;
                }
            }
        }
    }
    else
    for(i=1;i<size-1;i++)
        {
            if(i%2==0)
            {
                if(arr[i]>arr[i+1])
                {
                    f=0;
                    break;
                }
            }
            else
            {
                if(arr[i]<arr[i+1])
                {
                    f=0;
                    break;
                }
            }
        }
    if(f)
    {
        printf("wave");
    }
    else
    {
        printf("not wave");
    }
    return 0;
}