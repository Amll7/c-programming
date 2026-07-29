#include <stdio.h>

int main()
{
    int income,cibilscore;
    printf("Enter the income of the person:\n ");
    scanf("%d", &income);
    

    if (income >= 50000)
    {
       printf("enter the cibil score:");
       scanf("%d", &cibilscore);
       if (cibilscore >= 15000)
       {
        printf(" you are eligible for bank loan of 3 lakh");
       }

        
       else
       {
        
        printf("sorry you are not eligible for the loan at this moment due to low cibil score");
       }
    }    
    else
        printf("sorry you sre not eligible for the loan at this moment due to low income");
    
    return 0;
}