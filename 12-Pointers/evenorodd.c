#include<stdio.h>
void check(int *ptr)
{
     //even or odd
   if(*ptr%2==0)
   {
    printf("EVEN");
   }
   else
   {
    printf("ODD");
   }
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
   

    
    //assigning adress to pointer
    int *ptr;
    ptr=&num;
    check(ptr);
   
   return 0;
}