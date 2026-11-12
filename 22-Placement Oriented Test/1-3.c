#include<stdio.h>
int main()
{
int num,i,end=0;
printf("Enter the num :");
scanf("%d",&num);
for(i=0;i<32;i++)
{
 if(num&(1<<i))
 {
    end=i;
 }
}
printf("\nrev: ");
for(i=0;i<=end;i++)
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
printf("\nbinary: ");
for(i=end;i>=0;i--)
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
