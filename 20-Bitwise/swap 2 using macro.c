#include<stdio.h>
int main()
#define SWAP(num1,num2)temp=num1;\
num1=num2;\
num2=temp;
{
    int num1,num2;
    printf("Enter the number: ");
    scanf("%d",&num1);
    printf("Enter the number: ");
    scanf("%d",&num2);
    printf("%s\n",__FILE__);
    int temp;
    SWAP(num1,num2);
    printf("%d %d ",num1,num2);
}