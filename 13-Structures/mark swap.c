#include<stdio.h>
struct student
{
    char name[100];
    int roll;
    float marks;
};
void func(struct student *s1,struct student *s2);
int main()
{
    struct student s1,s2;
    printf("Enter the student name:");
    scanf("%s",s1.name);
    printf("Enter the student roll:");
    scanf("%d",&s1.roll);
    printf("Enter the student mark:");
    scanf("%f",&s1.marks);
    printf("Enter the student name:");
    scanf("%s",s2.name);
    printf("Enter the student roll:");
    scanf("%d",&s2.roll);
    printf("Enter the student mark:");
    scanf("%f",&s2.marks);
    func(&s1,&s2);
    printf("student name:%s\n",s1.name);
    printf("student roll:%d\n",s1.roll);
    printf("student marks:%f\n",s1.marks);
    printf("student name:%s\n",s2.name);
    printf("student roll:%d\n",s2.roll);
    printf("student marks:%f\n",s2.marks);
}
void func(struct student *s1,struct student *s2)
{
    float temp;
    temp=s1->marks;
    s1->marks=s2->marks;
    s2->marks=temp;
}