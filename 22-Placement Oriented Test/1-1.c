#include<stdio.h>
int main()
{
    int i,j;
    int n;
    int start=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d ",start);
            if(j==(i-1)&&start!=1)
            {
                start--;
            }
            start++;
        }
         printf("\n");
    }
}