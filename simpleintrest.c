#include <stdio.h>
int main()
{
    int principle, timeperiod, rate;
    float simpleinterst;
    printf ("enter principle amnt,time period,interest rate");
    scanf("%d %d %d",&principle,&timeperiod,&rate);
    simpleinterst = (principle*timeperiod*rate)/100;
    printf("simple interest is %f",simpleinterst);
    return 0;
}