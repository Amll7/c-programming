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
    int i,j;
    int count=0,count1=0;
    int index=0;
    for(i=0;str[i]!='\0';i++)
    {
        count=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
              
        }
        if(count1<count)
        {
            count1=count;
            index=i;
        }
        
    }
     printf("%c",str[index]);

}