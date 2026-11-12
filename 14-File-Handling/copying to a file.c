#include<stdio.h>
#include <stdlib.h>
int main()
{
  FILE *ptr=fopen("file.txt","r");
  FILE *ptr1=fopen("file1.txt","w");
  char ch;
  while(fscanf(ptr,"%c",&ch)!=EOF)
  {
    fprintf(ptr1,"%c",ch);
  }
  return 0;
  
}