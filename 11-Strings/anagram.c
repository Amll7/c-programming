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
    int arr[n];
    arr[n]={0};
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
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            printf("not anagram");
        }
        
    }
    
        
        printf("anagram"); 
}