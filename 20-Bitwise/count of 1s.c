#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int count=0;
    int mask=1;
    int res;
    for(int i=0;i<32;i++)
    {
    res=num&(mask<<i);
    if(res==(mask<<i))
    {
      count++;
    }
    }
    printf("%d",count);
    return 0;
}