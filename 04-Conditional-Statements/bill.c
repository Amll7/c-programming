#include <stdio.h>
int main()
{
    float bill_amount,finalbill,discount;
    printf("enter the bill amount:\n");
    scanf("%f",&bill_amount);
if (bill_amount<=1000)
{ 
     discount = bill_amount*.1;
 
}
 else if (bill_amount<=5000)
{
 discount = bill_amount*.2;
}
 else
{
 discount = bill_amount*.5;
}
 finalbill = bill_amount - discount;
 printf("discount is %.2f\n",discount);
 printf("final bill amount is %.2f",finalbill);
 
 return 0;
}
