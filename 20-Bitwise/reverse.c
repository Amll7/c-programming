#include <stdio.h>

unsigned int reverse(unsigned int num)
{
   unsigned int get;
   int i;
   for(i=0;i<32;i++)
   {
    get=num&(1U<<31);
    get=get>>31;
    num=num<<1U;
    num=num|get;
   }
   return num;

}
void print_bits(unsigned int num)
{
    int i;
    printf("Result in Binary:");
    for(i=31;i>=0;i--)
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
    unsigned int num,ret;
    
    printf("Enter the num:\n");
    scanf("%u", &num);
    ret = reverse(num);
    print_bits(ret);
    
}