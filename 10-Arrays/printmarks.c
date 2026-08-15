#include<stdio.h>
int main()
{
    int i,size,j;
    printf("Enter the size:");
    scanf("%d",&size);
    int mark[size];
    printf("enter the marks :");
    for(j=0;j<size;j++)
    {
        scanf("%d",&mark[j]);

    }
    printf("The marks are ");
    for(i=0;i<size;i++)
   {
       printf("%d ",mark[i]);
       
   }
   printf("\nThe size of marks variable is %lu",sizeof(mark[i]));
   return 0;
}rurZyk-byswa0-xucwud