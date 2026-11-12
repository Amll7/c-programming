#include<stdio.h>
int main()
{
int num,i,end,n;
printf("Enter the num :");
scanf("%d",&num);
printf("Enter the pos :");
scanf("%d",&end);
printf("Enter the n :");
scanf("%d",&n);
printf("binary: ");
for(i=end;i>(end-n);i--)
{
 if(num&(1<<i))
 {
    printf("1");
 }
 else
 {
  printf("0");
 }
}
}