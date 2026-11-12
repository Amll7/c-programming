#include<stdio.h>
void func(int ch,int *line,int *word,char *temp);
int main()
{
    int line=0;
    int word=0;
    int chara=0;
    char temp=' ';
    int ch=0;
    printf("Enter the string: ");
    while(1)
    {
    ch = getchar();
    if(ch==EOF)
    {
        break;
    }
    chara++;
    func(ch,&line,&word,&temp);
    }
    printf("Line count : %d\n",line);
    printf("word count : %d\n",word);
    printf("character count : %d",chara);
    
}
void func(int ch,int *line,int *word,char *temp)
{
  
    if(ch==' '||ch=='\t'||ch=='\n')
    {
      
      if(*temp!=' ')
      {
        (*word)++;
        *temp=' ';
      }
      if(ch=='\n')
      {
        (*line)++;
      }
    }
    else
    {
        *temp=ch;
    }
  
}