#include<stdio.h>

    int func(int a,int b,char ch)
    {
       switch(ch)
       {
         case '+':
         return a+b;
         break;
         case '-':
         return a-b;
         break;
         case '*':
         return a*b;
         break;
         case '/':
         return a/b;
         break;
         default:
         printf("Invalid operator");

       }
    }

    int main()
    {
        char ch;
        int result,a,b;
        printf("Enter the numbers and operator:");
        scanf("%d %d %c",&a,&b,&ch);
        result=func(a,b,ch);
        printf("Result = %d ",result);
        return 0;
    }