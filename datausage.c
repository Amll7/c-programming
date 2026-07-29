#include <stdio.h>
int main()
{
    float datausage;
    printf("enter the data usage in GB:");
    scanf("%f",&datausage);
if (datausage < 1)
    printf("low internet usage");
else if (datausage < 3)
    printf("medium internet usage");
else
 printf("high internet usage");
return 0;
}
