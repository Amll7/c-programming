#include<stdio.h>
int main()
{
    int n1,n2,num,cd,temp;
    printf("enter a number :");
    scanf("%d",&num);
    printf("enter first number, second number :");
    scanf("%d %d",&n1,&n2);
    cd = n2-n1;
    temp = n1;
    while (num>=0)
    {
      printf(" %d ",temp);
      temp = temp + cd;
      num--;
    }
    return 0;
}