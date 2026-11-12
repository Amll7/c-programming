#include<stdio.h>
int main()
{
int a=12;
int b=0x78563412;
char *ptr1=(char *)&a;
char *ptr2=(char *)&b;
char temp;
for(int i=0;i<sizeof(a);i++)
{
   temp= *(ptr1+i);
   *(ptr1+i)=*(ptr2+i);
   *(ptr2+i)=temp;
}
printf("After swapping: ");
printf("%x\n",a);
printf("%x",b);
}