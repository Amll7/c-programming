#include<stdio.h>
int main()
{
    int a,b,i,power=1;
    printf("Enter the two variables:");
    scanf("%d %d",&a,&b);
    for (i=1;i<=b;i++)
    {
        
        
        power = power*a;
    }
    printf(" %d ",power);
    return 0;
}