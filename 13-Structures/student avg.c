#include<stdio.h>
struct student
{
    char name[100];
    int roll;
    float sub1,sub2,sub3;
};
void func(struct student s[]);
int main()
{
    int i;
    struct student s[3];
    for(i=0;i<3;i++)
    {
    printf("Enter the student name:");
    scanf("%s",s[i].name);
    printf("Enter the student roll:");
    scanf("%d",&s[i].roll);
    printf("Enter the student mark of maths:");
    scanf("%f",&s[i].sub1);
    printf("Enter the student mark of physics:");
    scanf("%f",&s[i].sub2);
    printf("Enter the student mark of chemistry:");
    scanf("%f",&s[i].sub3);
    }
    func(s);

}
void func(struct student s[])
{
    float avg;
    printf("|--------------------------------------------------------------------|\n");
    printf("|name       roll_no      maths      physics   chemistry     average  |\n");
    for(int i=0;i<3;i++)
    {
    avg=(s[i].sub3+s[i].sub1+s[i].sub2)/3;
    printf("|--------------------------------------------------------------------|\n");
    printf("| %s         %d           %.2f       %.2f      %.2f        %.2f  |\n"
        ,s[i].name,s[i].roll,s[i].sub1,s[i].sub2,s[i].sub3,avg);
    printf("|--------------------------------------------------------------------|\n");
    }

}