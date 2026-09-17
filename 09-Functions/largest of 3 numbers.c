#include<stdio.h>
int larg(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    
    }
    else if (b>c && b>a)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int x,y,z,largest;
    printf("Enter the numbers :");
    scanf("%d %d %d",&x,&y,&z);
    largest =larg(x,y,z);
    printf("largest is %d",largest);
    return 0;
}


