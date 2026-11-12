#include <stdio.h>

int set(int num)
{
   int i,j,get0;
   for(i=0;i<32;i++)
   {
    if(num&(1<<i))
    {
        get0=i;
        break;
    }
   }
   for(j=i;j<32;j++)
   {
    if(num&(1<<j))
    {
        if(get0+1==j)
        {
            return 1;
        }
        else
        {
            get0=j;
        }
    }
   }
   return 0;
}
int main()
{
    int num,ret;
    printf("Enter the num:\n");
    scanf("%d", &num); 
    ret =set(num);
    if(ret==1)
    {
        printf("Set.");
    }
    else
    {
         printf("Not Set.");
    }
}