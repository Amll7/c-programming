#include<stdio.h>
void copy(char arr[],char arr1[]);
int main()
{
    
    int length=100;
    char str[length],str1[length];
    printf("Enter the string:");
    scanf("%s",str);
    copy(str,str1);
}
void copy(char arr[],char arr1[])
{
    int i=0;
    while(arr[i]!='\0')
    {
        arr1[i]=arr[i];
        i++;
    }
    arr1[i]='\0';
    printf("new is %s",arr1);
    
}

