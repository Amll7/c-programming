#include <stdio.h>

int twopower(int num)
{
   int count=0;
   for(int i=0;i<32;i++)
   {
    if(num&(1<<i))
    {
        count++;
    }
   }
   return count;   
}


int main()
{
    int num,ret;
    printf("Enter the num:");
    scanf("%d",&num);
    ret=twopower(num);
    if(ret==1)
    {
        printf("%d is in 2 power series.",num);
    }
    else
    {
        printf("%d is not in 2 power series.",num);
    }
    
}