#include <stdio.h>

int sum(int *ptr, int *ptr1)
{
    return *ptr + *ptr1;
}

int main()
{
    int num1, num2;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    int result = sum(&num1, &num2);

    printf("The sum is %d\n", result);

    return 0;
}