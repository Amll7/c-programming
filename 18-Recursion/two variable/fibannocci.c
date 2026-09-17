#include<stdio.h>
void func(int,int,int,int);
int main()
{
    int num1=0,num2=1,next=0,limit;
    printf("Enter the limit:");
    scanf("%d",&limit);
    func(num1,num2,next,limit);
    
}

void func(int num1,int n2,int nxt,int limit)
{
    if (num1>limit)
    {
        return;
    }
    printf("%d ",num1);
    nxt=num1+n2;
    num1=n2;
    n2=nxt;
    return func(num1,n2,nxt,limit);
    
}