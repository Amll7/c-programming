#include <stdio.h>
int leadset(int num)
{
   int i;
   for(i=31;i>=0;i--)
   {
    if(num&(1<<i))
    {
        return i;
    } 
   }   
}
int main()
{
    int num,position=1,ret;
    
    printf("Enter the num:\n");
    scanf("%d", &num);
    
    ret = leadset(num);
    for(int i=1;i<=ret;i++)
    {
      position=position*2;
    }
    
    printf("%d",position);
}