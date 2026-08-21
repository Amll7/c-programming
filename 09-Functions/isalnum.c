#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    int ref=isalnum(ch);
    printf("%d",ref);
    return 0;
}




//isalnum means it belongs to digits,uppercase and lower case
//islower means lower cases
//ispunct means whitespace chara such as space,tab space,newline\n
//isxdigit means 0-a,a-f,A-F