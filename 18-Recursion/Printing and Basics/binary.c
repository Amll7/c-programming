#include<stdio.h>
void func(int);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    func(n);
    
    
}
void func(int a)
{
    if(a>0)
    {
     func(a/2);
     printf("%d",a%2);
    }
}