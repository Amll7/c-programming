#include<stdio.h>
#include<string.h>
int main(int argc,char **argv)
{
    float sum=0;
    int integer=0;
    for(int i=1;i<argc;i++)
    {
     integer=0;
     for(int j=0;j<strlen(argv[i]);j++)
     {
       integer=integer*10+(argv[i][j]-'0');
     }
     sum=sum+integer;
    }
    float avg=sum/(argc-1);
    printf("%f",avg);
}