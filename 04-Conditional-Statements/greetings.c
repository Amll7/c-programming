#include <stdio.h>
int main()
{
    int time;
    printf("enter the time:");
    scanf("%d",&time);
    if (time>=0 && time<=12)
    printf ("good morning");
else if (time>=13 && time<=18)
    printf ("good afternoon");
else 
    printf ("good night");
return 0;
}