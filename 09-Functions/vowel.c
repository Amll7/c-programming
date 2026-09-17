#include<stdio.h>

    void func(char a)
    {
        if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' ||
            a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
        {
            printf("ITS A VOWEL");
        }
        else 
        {
            printf("NOT A VOWEL");
        }
       
    }

    int main()
    {
        char ch;
        printf("Enter the character:");
        scanf("%c",&ch);
        func(ch);
        return 0;
    }