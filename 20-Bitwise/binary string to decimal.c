#include<stdio.h>
#include<string.h>
void bitoin(char str[])
{
 int decimal=0,power=1,i,j,count=0;
 int length=strlen(str);
 for(i=length-1;i>=0;i--)
 {
    if(str[i]=='1')
    {
      power=1;
      for(j=1;j<=count;j++)
      {
        power=power*2;
      }
      decimal=decimal+power;
    }
    count++;

 }
 printf("%d",decimal);
}
int main()
{
    char str[40];
    printf("Enter the string: ");
    scanf("%s",str);
    bitoin(str);
}