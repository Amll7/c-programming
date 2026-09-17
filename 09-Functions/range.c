#include <stdio.h>
void func(int num)
{
    if((num >= 0 && num <= 100) || (num >= -50 && num <= 70))
    {
        printf("number is in range");
    }
    else
    {
        printf("number is not in range");
    }
}

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);
    func(num);
   

    return 0;
}