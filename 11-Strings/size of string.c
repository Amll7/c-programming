#include<stdio.h>
int main()
{
    if (sizeof ("Hello" "world")==sizeof("Hello")+sizeof("World"))
    {
    printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}