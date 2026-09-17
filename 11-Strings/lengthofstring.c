#include<stdio.h>
int main()
{
    int i=0;
    char str[i];
    printf("Enter the string:");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        i++;
    }
    printf("%d",i);
    return 0;

}