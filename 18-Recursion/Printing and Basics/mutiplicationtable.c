#include<stdio.h>
void func(int,int);
int main()
{
    int n,count=1;
    printf("Enter the number:");
    scanf("%d",&n);
    func(n,count);
    
}
void func(int a,int i)
{
    if(i==11)
    return;
    
        printf("%d ",a*i);
        func(a,i+1);
       
    
}