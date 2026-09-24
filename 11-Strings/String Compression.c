#include<stdio.h>
void func(char str[]);
int main()
{
    char str[100];
    printf("enter the string:");
    scanf("%s",str);
    func(str);

}
void func(char str[])
{
    int i;
    int count=0;
    char check=str[0];
    for(i=0;str[i]!='\0';i++)
    {
        
        if(str[i]==check)
        {
            count++;
        }
        else
        {
            printf("%c",check);
            printf("%d",count);
            count=1;
            check=str[i];
            
        }
        
    }
            printf("%c",check);
            printf("%d",count);      
}