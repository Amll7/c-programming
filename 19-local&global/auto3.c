#include <stdio.h>
char *foo()
{
char ca[12] = "Hello World";
return ca;
}
int main()
{
char *ca;
ca = foo();
printf("ca is %s\n", ca);
return 0;
}
//here the variable ca is declared inside the function 
//so when returning the stack get deleted 
//after that it cant be accessed
// solved using static keyword in fn