#include<stdio.h>
int main()
{
    int num,rem,rev=0,rem1,rev1=0;
    printf("enter a number :");
    scanf("%d",&num);


 while(num>0)
{
 rem = num %10;
if (rem!=0)
{
rev = rev*10+rem;
}
num = num/10;
}
while (rev>0)
{
    rem1 = rev%10;
    rev1 = rev1*10+rem1;
    rev = rev/10;

}

printf("%d",rev1);
return 0;
}