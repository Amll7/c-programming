#include<stdio.h>
void func(int);
int main()
{
    int n;
    printf("Enter the limit:");
    scanf("%d",&n);
    func(n);
    printf("\nfirst %d natural numbers are printed",n);
}
void func(int a)
{
    if(a>0)
    {
        func(a-1);
        printf("%d ",a);//put this printf to get n to 1
    }
}