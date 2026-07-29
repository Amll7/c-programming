#include <stdio.h>
int main()
{
    int a,b,c;
    int total;
    float avg;
    printf("enter 3 numbers");
    scanf("%d %d %d",&a,&b,&c);
    total= a+b+c;
    avg = total/3;
    printf("total is %d\n",total);
    printf("avg is %.2f",avg);
    return 0;
}
