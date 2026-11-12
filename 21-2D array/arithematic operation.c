#include<stdio.h>
void arithematic(int num1,int num2,int *sum,int *sub,int *mul,float *div)
{
  *sum=num1+num2;
  *sub=num1-num2;
  *mul=num1*num2;
  *div=num1/num2;
}
int main()
{
    int num1=10;
    int num2=5;
    int sum,sub,mul;
    float div;
    arithematic(num1,num2,&sum,&sub,&mul,&div);
    printf("%d\n %d\n %d\n %f",sum,sub,mul,div);
}