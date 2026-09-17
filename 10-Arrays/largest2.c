#include<stdio.h>
void largest(int arr,int size,int *larg);
int main()
{
 int i,size;
 printf("Enter the size of the array:");
 scanf("%d",&size);
 int arr[size];
 printf("Enter the elements of the array:");
 for(i=0;i<size;i++)
 {
    scanf("%d",&arr[i]);
 }
int larg=arr[0];
largest(arr,size,&larg);
printf("largest =%d\n",larg);
}
//largest function
void largest(int arr[],int size,int *larg)
{
   int i;
   for(i=1;i<size;i++)
   {
      if(arr[i]>*larg)
      {
         *larg=arr[i];
      }
   }
}