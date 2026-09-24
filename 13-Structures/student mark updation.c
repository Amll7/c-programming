#include<stdio.h>
struct student
{
    char name[100];
    int roll;
    float marks;
};
void func(struct student *s);
int main()
{
    struct student s1;
    printf("Enter the student name:");
    scanf("%s",s1.name);
    printf("Enter the student roll:");
    scanf("%d",&s1.roll);
    printf("Enter the student mark:");
    scanf("%f",&s1.marks);
    func(&s1);
    printf("student name:%s\n",s1.name);
    printf("student roll:%d\n",s1.roll);
    printf("student marks:%f\n",s1.marks);
}
void func(struct student *s)
{
    s->marks+=5;
}