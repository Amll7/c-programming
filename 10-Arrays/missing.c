#include <stdio.h>

void missing(int arr[], int size)
{
    
    

   
    int largest=arr[0],i,j,flag;
    for(i=0;i<size;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
        
    }
    if(largest<0)
    {
        printf("Missing element is 1");
        
    }
    
    for(i=1;i<=largest;i++)
    {
      flag=0;
      for(j=0;j<size;j++)
      {
        if(arr[j] == i)
        {
           flag=1;
           break; 
        }

      }
      if (flag==0)
      {
        printf("missing element is %d",i);
        break;
      }
      
    }
    
    

}

int main()
{
    int size, ret;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    //Read elements into the array
    printf("Enter the elements into the Array:");
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //funtion call
    missing(arr, size);
    
    
}
