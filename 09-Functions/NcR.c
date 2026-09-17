#include<stdio.h>

    void func(int n,int r)
    {
        int i,nfact=1,rfact=1,nrfact=1,ncr;
        for(i=1;i<=n;i++)
        {
            nfact=nfact*i;
        }
        for(i=1;i<=r;i++)
        {
            rfact=rfact*i;
        }
        for(i=1;i<=(n-r);i++)
        {
            nrfact=nrfact*i;
        }
        ncr=nfact/(rfact*nrfact);
        printf("No of combinations are : %d",ncr);

    
    }

    int main()
    {
        int num,c;
        printf("Enter the number:");
        scanf("%d",&num);
        printf("Enter the combination:");
        scanf("%d",&c);
        func(num,c);
        return 0;
    }