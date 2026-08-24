#include<stdio.h>
void change(char *ptr)
{
    *ptr=*ptr+25;
}
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    char *ptr;
    ptr=&ch;
    printf("The adress of ptr is %p\n",&ptr);
    change(ptr);
    printf("The adress of ptr is %p\n",&ptr);
    printf("The value is %c",ch);
    return 0;
}