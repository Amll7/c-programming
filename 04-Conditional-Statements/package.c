#include <stdio.h>
int main()
{
    float weight;
    printf("weight of the package:\n");
    scanf("%f",&weight);
if (weight <=2)
    printf("chare is 50 rupees");
else if (weight<= 5)
    printf("charge is 100 rupees");
else
 printf("charge is 200 rupees");
return 0;
}
