#include<stdio.h>
struct time
{
    int hr;
    int min;
    int sec;
};
void func(struct time *p);
int main()
{
    struct time p1;
    printf("Enter the hour:");
    scanf("%d",&p1.hr);
    printf("Enter the minutes:");
    scanf("%d",&p1.min);
    printf("Enter the second:");
    scanf("%d",&p1.sec);
    func(&p1);
}
void func(struct time *p1)
{
    printf("%d:%d:%d",p1->hr,p1->min,p1->sec);
    
}