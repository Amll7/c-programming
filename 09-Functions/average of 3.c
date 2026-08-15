#include<stdio.h>
int avg1(int a, int b, int c)
{
    int avg;
    avg=(a+b+c)/3;
    return avg;
}
int main()
{
    int a,b,c,average;
    printf("Enter the numbers:");
    scanf("%d %d %d", &a,&b,&c);
    average=avg1(a,b,c);
    printf("average is %d",average);
    return 0;
}