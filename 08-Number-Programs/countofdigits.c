#include<stdio.h>
int main ()
{
    int count=0,num;
    printf("Enter a number:");
    scanf("%d",&num);
    while (num>0)
    {
        num = num/10;
        count++;
    }
    printf("count is %d",count);
return 0;

}