#include <stdio.h>

void swap(int *ptr, int *ptr1)
{
    int temp;

    temp = *ptr;
    *ptr = *ptr1;
    *ptr1 = temp;
}

int main()
{
    int num1, num2;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    printf("Before swap: %d %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After swap: %d %d\n", num1, num2);

    return 0;
}