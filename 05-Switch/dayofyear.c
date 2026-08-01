
#include<stdio.h>
int main()
{
    int start_day,nth_day,label;
    scanf("%d %d",&nth_day,&start_day);
    if(nth_day <= 0 || nth_day > 365){
    printf("Error: Invalid input, n value should be > 0 and < 365");
    return 0;
    }
    if (start_day<=0 || start_day >7)
    {
        printf("Error: Invalid input, first day should be > 0 and <= 7");
        return 0;
    }
    
    label =(start_day+nth_day-1)%7;
    switch (label)
{
   
   case 1:
   printf("The day is sunday");
   break;
   case 2:
   printf("The day is monday");
   break;
   case 3:
   printf("The day is tuesday");
   break;
   case 4:
   printf("The day is wednesday");
   break;
   case 5:
   printf("The day is thursday");
   break;
   case 6:
   printf("The day is friday");
   break;
   case 0:
   printf("The day is saturday");
   break;
   default:
   printf("Invalid input");
   
}

return 0;
}