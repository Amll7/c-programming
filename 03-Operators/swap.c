#include <stdio.h>
int main()
{
    int a=6, b=8 ,temp;
    temp = a;
    a = b;
    b = temp;
    printf("a is %d\n",a);
    printf("b is %d",b);
    return 0;
}

