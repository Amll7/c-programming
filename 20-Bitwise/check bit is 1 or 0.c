#include<stdio.h>
int main()
{
    int num,bit;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the bit: ");
    scanf("%d",&bit);
    int mask=1;
    int res=num&(mask<<bit);
    if(res==(mask<<bit))
    {
        printf("Bit is 1");

    }
    else
    {
        printf("Bit is 0");
    }
    return 0;
}