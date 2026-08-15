#include<stdio.h>
int main()
{
    int n,num=2,count=0,i;
    printf("enter number of terms:");
    scanf("%d",&n);
    while (count<n)
    {
for (i=2;i<=num/2;i++)
{
        if (num%i==0)
        break;
}
        if (i>num/2)
        {
            printf(" %d ",num);
            count=count+1;
        }
        num++;
    }
    
    return 0;
}