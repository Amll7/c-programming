#include <stdio.h>

int main()
{
    int age,drivingtest;
    printf("Enter the age of the person:\n ");
    scanf("%d", &age);
    

    if (age >= 18)
    {
       printf("status of driving test (1 = pass, 0 = fail): ");
       scanf("%d", &drivingtest);
       if (drivingtest == 1)
       {
        printf("eligible for driving license");
       }

        
       else
       {
        
        printf("not eligible for drivig license");
       }
    }    
    else
        printf("not eligible for driving test");
    
    return 0;
}