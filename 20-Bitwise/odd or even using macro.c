#include<stdio.h>
#define ODDEVEN(num)(num&1)
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int result=ODDEVEN(num);
    if(result)
    {
     printf("ODD");
    }
    else
    {
    printf("EVEN");
    }
}