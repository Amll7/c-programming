#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    char *ptr;
    ptr=&ch;
    printf("The adress of p is %p\n",ptr);
    printf("The value is %c\n",*ptr);
    *ptr=*ptr+25;
    printf("The value is %c",ch);
    return 0;
}