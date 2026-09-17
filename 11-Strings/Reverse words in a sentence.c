#include<stdio.h>
#include<string.h>
void func(char str[]);
int main()
{
    char str[100];
    printf("enter the string:");
    scanf("%[^\n]",str);
    func(str);
}
void func(char str[])
{
    int i,j;
    for(i=strlen(str)-1;i!=0;i--)
    {  
            if(str[i]==' ')
            {
             for(j=i+1;str[j]!='\0'&&str[j]!=' ';j++)
             {
                printf("%c",str[j]);
             }
             printf(" ");
            }
             
            
    }
        for(j=0;str[j]!=' ';j++)
        {
            printf("%c",str[j]);
        }
        
    
}