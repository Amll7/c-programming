#include<stdio.h>
void func(int);
int main()
{
    int n;
    printf("Enter the limit:");
    scanf("%d",&n);
    func(n);
   
}
void func(int a)
{
    if(a==0)
    return;

     printf("%d ",a);
     func(a-2);
    
}