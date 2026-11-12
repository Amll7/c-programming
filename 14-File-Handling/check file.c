#include<stdio.h>
int main()
{
  FILE *ptr=fopen("file.txt","r");

if(ptr==NULL)
{
    printf("file is not present");
}
else
{
    printf("file is present!!");
}
}