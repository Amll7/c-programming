#include <stdio.h>
int main()
{
    float radius ,area , perimetre;

    printf("enter the radius");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    perimetre=  2*3.14*radius;
printf("area of circle is %f and perimetre is %f",area,perimetre);
return 0;
}
