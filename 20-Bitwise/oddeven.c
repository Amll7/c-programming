#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int mask=1;
    int res=num&mask;
    if(res==0)
    {
        printf("EVEN");

    }
    else
    {
        printf("ODD");
    }
    return 0;
}