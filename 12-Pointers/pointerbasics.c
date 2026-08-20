#include<stdio.h>
int main()
{
    int x=10;
    int *p;
    p=&x;
    printf("Value of x = %d\n",x);
    printf("Adress of x = %p\n",&x);
    printf("Value stored in p = %p\n",p);
    printf("Adress of pointer variable p = %p\n",&p);
    printf("Value using pointer = %d\n",*p);
    printf("size of p = %zu",sizeof(*p));
    printf("size of p = %zu",sizeof(p));
    return 0;
}