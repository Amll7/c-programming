#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int mask=1;
    int res;
    for(int i=31;i>=0;i--)
    {
    res=num&(mask<<i);
    if(res==(mask<<i))
    {
      printf("1");
    }
    else
    {
      printf("0");
    }
    }
    return 0;
}