#include <stdio.h>
int main()
{

int j = 10;
{
int j = 100;
printf("j %d\n", j);
}
printf("j %d\n", j);
return 0;
}
