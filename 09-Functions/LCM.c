#include<stdio.h>
int func(int a,int b)
{
    int i,lcm;
for (i=1;;i++)
{
    if ((a*i)%b==0)
    {
        lcm=a*i;
        break;
    }
    
}
return lcm;
}

int main()
{
    int a,b,result;
    printf("Enter the smallest number:");
    scanf("%d",&a);
    printf("Enter the largest number:");
    scanf("%d",&b);
    result=func(a,b);
    printf("LCM is %d",result);
    return 0;
}