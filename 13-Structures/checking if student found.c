#include<stdio.h>
struct student
{
    char name[100];
    int roll;
    float marks;
};
void func(struct student s[],int check);
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
    int check;
    printf("Enter the roll number to check");
    scanf("%d",&check);
    func(s,check);
    return 0;
}
void func(struct student s[],int check)
{
    int flag=0;
    for(int i=0;i<5;i++)
    {
        if(s[i].roll==check)
        {
            printf("Student found");
            flag=1;
            break;     
        }
    }
    
        if(flag==0)
        {
             printf("Student not found");
        }
        
    

}