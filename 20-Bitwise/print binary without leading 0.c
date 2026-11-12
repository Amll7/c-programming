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
void print_bits(unsigned int num,int ret)
{
    int i;
    printf("Result in Binary:");
    for(i=ret;i>=0;i--)
    {
        if(num&(1U<<i))
        {
            printf(" 1");
        }
        else
        {
            printf(" 0");
        }
    }
}
int main()
{
    int num,ret;
    
    printf("Enter the num:\n");
    scanf("%d", &num);
    
    ret = leadset(num);
    print_bits(num,ret);
}