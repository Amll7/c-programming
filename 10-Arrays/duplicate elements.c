#include <stdio.h>

void duplicate(int arr[], int size)
{
    
    

   
    int i,j,skip;
    
    
    for(i=0;i<size;i++)
    {
     skip=0;
     for(j=0;j<i;j++)
     {
        if(arr[i]==arr[j])
        {
         skip=1;
         break;
        }
     }

      if(skip==1)
      continue;

     for(j=i+1;j<size;j++)
      {
        if(arr[i]==arr[j])
        {
          printf("%d ",arr[i]);
          break;
        }

      }
      
      
    }
    
    

}

int main()
{
    int size;
    
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
    duplicate(arr, size);
    
    
}
