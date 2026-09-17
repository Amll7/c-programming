#include <stdio.h>
int main()
{


int i = 2;
{
int j = 4;
printf("i %d\n", i);
}
printf("j %d\n", j);
return 0;
}
//here the j is declared inside the block 
//so if we try to print outside the block it wont print
//it shows undeclared variable