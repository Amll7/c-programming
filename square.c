#include <stdio.h>
int main()
{
    int length,area , perimetre;
    printf("enter the length");
    scanf("%d",&length);
    area = length*length;
    perimetre= 4*length;
printf("area of square is %d and perimetre is %d",area,perimetre);
return 0;
}
