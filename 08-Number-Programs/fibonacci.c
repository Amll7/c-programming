#include<stdio.h>
int main()
{
    int n,num1=0,num2=1,next;
    printf("enter a number :");
    scanf("%d",&n);
    while (n>=0)
 {
    printf(" %d ",num1);
    next = num1+num2;
    num1=num2;
    num2 = next;
    n--;
 }
 return 0;
}