#include<stdio.h>
void arithematic(int num1,int num2,int *arr[])
{
  *arr[0]=num1+num2;
  *arr[1]=num1-num2;
  *arr[2]=num1*num2;
  *arr[3]=num1/num2;
}
int main()
{
    int num1=10;
    int num2=5;
    int sum,sub,mul,div;
    int *arr[4]={&sum,&sub,&mul,&div};
    arithematic(num1,num2,arr);
    printf("%d\n %d\n %d\n %d",sum,sub,mul,div);
}