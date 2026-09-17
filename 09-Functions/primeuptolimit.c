#include<stdio.h>
void func(int num)
{
   int i,count=0,j;
   for (i=2;i<=num;i++)
   {
      count=0;
      for(j=1;j<=i/2;j++)
      {
        if(i%j==0)
        {
        count++;
        }
      }
      if(count==1)
      {
        printf("%d ",i);
      }
    }

}
int main()
{
    int num;
    printf("Enter the limit:");
    scanf("%d",&num);
    func(num);
    return 0;
}