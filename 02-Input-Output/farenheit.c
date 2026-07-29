#include <stdio.h>
int main()
{
    float celcius, farenheit;
    printf ("enter the celcius");
    scanf ("%f",&celcius);
    farenheit = 9/5*celcius+32;
    printf("farenheit is %.2f",farenheit);
    return 0;
}