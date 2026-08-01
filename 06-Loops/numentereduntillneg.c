#include<stdio.h>
int main ()
{
    int i,num;
    for (;;i++)
    {
      printf("enter the number:");
      scanf("%d",&num);
      if (num<0)
     {
      printf("negative number entered program terminated");
      break;
     }
    
    }
    return 0;
}
    