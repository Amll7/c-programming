#include<stdio.h>
#include<string.h>
void func(char str[],char str1[]);
int main()
{
    char str[100],str1[100];
    printf("enter the string:");
    scanf("%s",str);
    getchar();
    printf("enter the string:");
    scanf("%s",str1);
    func(str,str1);

}
void func(char str[],char str1[])
{
    int i,j;
    int n=strlen(str);
    int arr[26]={0};
    
    int k=0;
    for(i=0;str[i]!='\0';i++)
    {
        for(j=0;str[j]!='\0';j++)
        {
            if(str[i]==str1[j])
            {
              if(str[i]>='A'&&str[i]<='Z')
              {
                k=str[i]-'A';
                arr[k]=1;
              }
              else
              {
                 k=str[i]-'a';
                 arr[k]=1;
              }

            }  
        }
        
    }
    int count=0;
    for(i=0;i<26;i++)
    {
       if(arr[i]!=0)
       {
       count++;
       } 
    }
    if(count==n)
    {
            printf("anagram");
    }
    else
    {  
    printf("anagram"); 
    }
}