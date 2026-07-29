#include <stdio.h>

int main()
{
    float cgpa;
    int aptitudemarks;
    printf("Enter the cgpa and apltitude marks: ");
    scanf("%f %d", &cgpa, &aptitudemarks);

    if (cgpa >= 7)
{
        if (aptitudemarks>=15)
            printf("next round");
        
         else
        
        printf("out of round");
       
    else
        printf("not eligible");
    
    return 0;
}