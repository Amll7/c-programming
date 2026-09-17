#include <stdio.h>
static int x = 10;
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

// IMPORTANT:
// At file/global scope:
// static int x = 10;  -> x has INTERNAL linkage.
// int x;               -> x has EXTERNAL linkage.
//
// A later non-static declaration cannot follow a static declaration
// of the same identifier.
// Therefore:
// static int x = 10;
// int x;
// => COMPILATION ERROR