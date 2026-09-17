#include <stdio.h>
int main()
{
int i = 10;
register int *j = &i;
printf("*j %d\n", *j);
return 0;
}
//register can store some adress of variable and can fetch the value of the variable 