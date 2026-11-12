#include<stdio.h>
#include <stdlib.h>
int main()
{
  FILE *ptr=fopen("file.txt","w");
  fprintf(ptr,"%d\n%s",1,"hello");
}