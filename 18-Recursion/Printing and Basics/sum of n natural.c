#include<stdio.h>
int func(int,int);
int main()
{
    int n,sum=0;
    printf("Enter the limit:");
    scanf("%d",&n);
    int ret=func(n,sum);
    printf("%d",ret);

    
}
int func(int a,int sum)
{
    if(a==0)
    return sum;

    sum=sum+a;
    return func(a-1,sum);

}