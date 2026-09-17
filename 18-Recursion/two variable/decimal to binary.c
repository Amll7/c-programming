//decimal to binary
#include<stdio.h>
void func(int);
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    func(num);
    
}

void func(int num)
{
    if (num==0)
    {
        return;
    }
    return func(num/2);
    printf("%d",num%2);
   
    
}