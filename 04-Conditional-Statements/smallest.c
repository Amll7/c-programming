#include <stdio.h>
int main()
{
int num1, num2 , num3;
printf("enter 3 number");
scanf("%d %d %d",&num1,&num2,&num3);
if (num1>num2 && num2<num3)
printf("number2 is smallest ");
else if (num1<num2 && num1<num3)
printf("number1 is smallest");
else 
printf("number 3 is the smallest");
return 0;
}