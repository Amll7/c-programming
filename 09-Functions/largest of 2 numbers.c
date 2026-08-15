#include<stdio.h>
int larg(int a,int b)
{
    if(a>b)
    {
        return a;
    
    }
    else
    {
        return b;
    }
}
int main()
{
    int x,y,largest;
    printf("Enter the numbers :");
    scanf("%d %d",&x,&y);
    largest =larg(x,y);
    printf("largest is %d",largest);
    return 0;
}


