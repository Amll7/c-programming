#include <stdio.h>

int main()
{
    int age,voterid;
    printf("Enter the age of the person:\n ");
    scanf("%d", &age);
    

    if (age >= 18)
    {
       printf("Enter voter ID (1 = Yes, 0 = No): ");
       scanf("%d", &voterid);
       if (voterid == 1)
       {
        printf(" you can cast a vote");
       }

        
       else
       {
        
        printf("no voter id");
       }
    }    
    else
        printf("not eligible for voting");
    
    return 0;
}