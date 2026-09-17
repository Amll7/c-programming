#include <stdio.h>
int main()
{
register int i = 10;
register int *j = &i;
printf("*j %d\n", *j);
return 0;
}
//HERE ALSO WE CANT FETCH THE ADRESS OF THE REGISTER VARIABLE 