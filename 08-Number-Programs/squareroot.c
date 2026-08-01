#include<stdio.h>
 #include<math.h>
int main ()
{
    int num;
    float root;

    printf("Enter a number: ");
    scanf("%d", &num);

    root = sqrt(num);

    printf("Square root = %.2f", root);

    return 0;
}