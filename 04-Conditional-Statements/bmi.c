#include <stdio.h>
int main()
{
    float height, weight,BMI;
    printf("enter the height in metre and weight :\n");
    scanf("%f %f",&height,&weight);
    BMI= weight/(height*height);
    printf("BMI is %.2f\n",BMI);
        if (BMI< 18)
    printf(" low weight\n");
  else if (BMI< 25)
    printf(" normal weight\n");
    else 
     printf(" high weight\n");
 return 0;
}
