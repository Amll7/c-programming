#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    char *ptr;
    ptr=&ch;
    printf("The character is %c",*ptr);
    return 0;
}