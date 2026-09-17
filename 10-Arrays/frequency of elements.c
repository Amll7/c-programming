#include <stdio.h>

void freq(int arr[], int size)
{
    
    

   
    int i,j,count,skip;
    
    
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
       
     count=1;
     for(j=i+1;j<size;j++)
      {
        if(arr[i]==arr[j])
        {
          count++;
        }

      }
      printf("\n%d repeats %d times",arr[i],count);
      
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
    freq(arr, size);
    
    
}
