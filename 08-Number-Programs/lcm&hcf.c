#include<stdio.h>
int main()
{
    int a,b,i,hcf,lcm;
    printf("Enter the numbers :");
    scanf("%d %d",&a,&b);
    for (i=1;i<=a/2;i++)
    {
        if (a%i==0 && b%i==0)
        hcf=i;
    }
    lcm =(a*b)/hcf;
    printf(" %d\n",hcf);
    printf(" %d ",lcm);
    return 0;
}

