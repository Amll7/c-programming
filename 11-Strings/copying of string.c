#include<stdio.h>
int main()
{
    int i=0;
    char str[10],str1[10];
    printf("Enter the string:");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        str1[i]=str[i];
        i++;
    }
    str1[i]='\0';
    printf("%s",str1);
    return 0;

}