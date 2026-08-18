#include<stdio.h>
int func();
int main()
{
    func();
    func();
}
int func()
{
    int x=1;
    printf("%d",x);
    x++;
}