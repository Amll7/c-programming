#include <stdio.h>

int squeeze(int num, int n,int pos)
{
   int get=num&(~((1<<pos)-1));
   get=get>>n;
   int clear=num&(~(((1<<n)-1)<<(pos-n+1)));
   clear=clear&(~(((1<<n)-1)<<(32-(31-pos))));
   num=clear|get;
   return num;   
}
int print_bits(int num)
{
    int i;
    printf("Result in Binary:");
    for(i=31;i>=0;i--)
    {
        if(num&(1<<i))
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
    int num, n, ret,pos;
    
    printf("Enter the num:\n");
    scanf("%d", &num);
    
    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter position:");
    scanf("%d", &pos);
    
    ret = squeeze(num,n,pos);
    
    print_bits(ret);
}