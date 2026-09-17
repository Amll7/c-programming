#include<stdio.h>
void func(int );
int main()
{
    int x=5;
    func(x);
    printf("Done");
}
void func(int a)
{
    if (a>0)
    {
        func(a-1);
        printf("Hello World\n");
    }
}