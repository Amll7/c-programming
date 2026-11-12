#include<stdio.h>
int main()
{
    int n,count=0,i,j;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%d ",i);
        }
    }
}