#include<stdio.h>
struct student
{
    char name[100];
    int roll;
    float marks;
};
int main()
{
    struct student s[5];
    int i;
    for(i=0;i<5;i++)
    {
    printf("Enter the student name:");
    scanf("%s",s[i].name);
    printf("Enter the student roll:");
    scanf("%d",&s[i].roll);
    printf("Enter the student mark:");
    scanf("%f",&s[i].marks);
    }
    for(i=0;i<5;i++)
    {
    printf("student name:%s\n",s[i].name);
    printf("student roll:%d\n",s[i].roll);
    printf("student marks:%f\n",s[i].marks);
    }
    return 0;
}
