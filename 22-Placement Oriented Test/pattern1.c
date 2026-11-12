#include<stdio.h>
    int main()
    {
        int n;
        char ch='A';
        scanf("%d",&n);
        int i,j,k;
        for(i=1;i<=n;i++)
        {
            ch='A';
            for(j=i;j<=n-1;j++)
            {
              printf("  ");
            }
                for(k=1;k<=(2*i-1);k++)
                {
                  if(k<=((2*i)/2))
                  {
                    printf("%c ",ch);
                    ch++;
                    if(k==((2*i)/2))
                    {
                        ch--;
                    }
                  }
                  else
                  {
                    ch--;
                    printf("%c ",ch);
                  }
                }
            
            printf("\n");
        }
    }
