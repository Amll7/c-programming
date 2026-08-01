#include<stdio.h>
int main()
{
    int rem,temp;
    int n,sum=0,cube;
    printf("enter a 3 digit number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem = n%10;
        cube = rem*rem*rem;
        sum=sum +cube;
        n = n/10;
    }
    if (sum == temp)

     printf("number is armstrong");
    else
     printf("number is not armstrong");
    return 0;
}