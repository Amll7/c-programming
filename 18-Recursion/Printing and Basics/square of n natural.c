#include<stdio.h>
void func(int,int);
int main()
{
    int n,count=1;
    printf("Enter the limit:");
    scanf("%d",&n);
    func(n,count);
}
void func(int a,int i)
{
    if(a==0)
    return;
        
        
        func(a-1,i);
        i=a*a;
        printf("%d %d\n",a,i);
       
    
}