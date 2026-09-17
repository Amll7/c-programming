#include<stdio.h>
int foo()
{
static int i;
return i;
}
int main()
{
static int x = foo();
printf("x %d\n", x);
return 0;
}


//x is declared as a static local variable.
//A static variable has static storage duration, so its initializer must be a compile-time constant.

//But:
//foo()

//is a function call, and its return value is determined at runtime