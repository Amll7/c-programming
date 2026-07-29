#include <stdio.h>

int main()
{
    char chara;

    printf("Enter the character: ");
    scanf("%c", &chara);

    if ((chara >= 'A' && chara <= 'Z') || (chara >= 'a' && chara <= 'z'))
        printf("Alphabet");
    else
        printf("Not Alphabet");

    return 0;
}