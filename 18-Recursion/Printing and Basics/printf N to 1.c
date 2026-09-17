#include<stdio.h>
void func(int);
int main()
{
    int n;
    printf("Enter the limit:");
    scanf("%d",&n);
    func(n);
    printf("\nfirst %d natural numbers are printed in reverse",n);
}
void func(int a)
{
    if(a>0)
    {
        printf("%d ",a);
        func(a-1);
       
    }
}