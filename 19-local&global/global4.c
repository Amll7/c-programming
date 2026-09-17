#include <stdio.h>
int x = 10;
int x;
int foo()
{
printf("x %d\n", x);
return 0;
}
int main()
{
foo();
return 0;
}

//here redeclaration of x is possible 
//but reinitialisation of x is not possible