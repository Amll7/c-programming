#include<stdio.h>
int main()
{
    int n,r,nfact=1,rfact=1,diff,combination,diffact=1;
    printf("enter number and combination :");
    scanf("%d %d",&n,&r);
    diff = n-r;
    while (n>0)
    {
    nfact=nfact*n;
    n--;
    }
    while (r>0)
    {
    rfact=rfact*r;
    r--;
    }
     while (diff>0)
    {
    diffact=diffact*diff;
    diff--;
    }
    
    combination= nfact/(rfact*diffact);
    printf("ncr = %d",combination);
    return 0;

}
