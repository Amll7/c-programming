#include <stdio.h>
int main()
{
    float temp;
    printf("enter the temperature in celcius:");
    scanf("%f",&temp);
if (temp< 20)
    printf("cold wheather");
else if (temp < 35)
    printf("normal wheather");
else
 printf("hot wheather");
return 0;
}
