#include <stdio.h>
int main()
{
    int length, breadth ,area , perimetre;
    printf("enter the leng and breadth");
    scanf("%d %d",&length,&breadth);
    area = length*breadth;
    perimetre= (2*length+breadth);
printf("area of rectangle is %d and perimetre is %d",area,perimetre);
return 0;
}
