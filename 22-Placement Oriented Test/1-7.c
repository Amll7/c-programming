#include<stdio.h>
#include<string.h>
int main()
{
    char main[100]="abcabc";
    int strm=strlen(main);
    char *rep;
    char str[50]="abc";
    char replace[50]="xyz";
    int strl=strlen(str);
    for(int i=0;i<(strm-1)/2;i++)
    {
        rep=strstr(main,str);
        if(rep!=NULL)
        {
         for(int j=0;j<strl;j++)
         {
            rep[j]=replace[j];
         }
        }
    }
    printf("%s",main);
    
}