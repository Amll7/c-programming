#include<stdio.h>
int main()
{
    FILE *fptr=fopen("file.txt","r");
    char ch[100];
    char temp;
    int i=0;
    while((temp=fgetc(fptr))!=EOF)
    {
        ch[i]=temp;
        i++;
    }
    FILE *fptr1=fopen("write.txt","w");
    fwrite(ch,3,1,fptr1);

}
