#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
   
    //assigning adress to pointer
    int *ptr;
    ptr=&num;

    //even or odd
   if(*ptr%2==0)
   {
    printf("EVEN");
   }
   else
   {
    printf("ODD");
   }
   return 0;
}