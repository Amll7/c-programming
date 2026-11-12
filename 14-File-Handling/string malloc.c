#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *cptr=malloc(7);
    if(cptr==NULL)
    {
        return 0;
    }
    scanf(" %[^\n]",cptr);
    printf("%s",cptr);
}
