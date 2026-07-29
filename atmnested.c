#include <stdio.h>

int main()
{
    int pin,balance = 5000,amount;
    printf("Enter the pin:\n ");
    scanf("%d", &pin);
    

    if (pin == 1818)
    {
       printf("Enter the amount: ");
       scanf("%d", &amount);
       if (amount <= balance)
       {
        printf("transaction successful");
       }

        
       else
       {
        
        printf("insufficent balance");
       }
    }    
    else
        printf("wrong pin");
    
    return 0;
}