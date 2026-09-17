#include <stdio.h>
int main()
{
int i = 10;
int i = 20;
{
printf("i %d\n", i);
}

printf("i %d\n", i);
return 0;
}
//here redefinition of i take place
//the i cant be initialised two times in the same block