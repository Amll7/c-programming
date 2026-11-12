#include<stdio.h>
void print(char* arr[])
{
   // printf("\nAfter modifing :\n");
    for(int i=0;i<3;i++)
    {
    printf("%s",arr[i]);
    }
}

int main()
{
    char str1[20]="Hello ";
    char str2[20]="Mone ";
    char str3[20]="Sugamano";
    //printf("Before modifing :");
    printf("%s %s %s\n",str1,str2,str3);
    char* arr[3];
    arr[0]=str1;
    arr[1]=str2;
    arr[2]=str3;
    print(arr);
}