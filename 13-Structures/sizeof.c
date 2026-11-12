#include<stdio.h>
struct variables
{
    char ch;
    char ch2;
    char ch1;
    int n1;
    short s;
    int i;
    
};
int main()
{
    struct variables v;
    printf("%zu",sizeof(v));
}