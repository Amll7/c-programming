#include<stdio.h>
struct employee
{
    char name[100];
    int id;
    int salary;
};
void func(struct employee *e1);
int main()
{
    struct employee e1;
    printf("Enter the employee name:");
    scanf("%s",e1.name);
    printf("Enter the employee id:");
    scanf("%d",&e1.id);
    printf("Enter the employee salary :");
    scanf("%d",&e1.salary);
    func(&e1);
    printf("employee name:%s\n",e1.name);
    printf("employee id:%d\n",e1.id);
    printf("employee salary:%d\n",e1.salary);
}
void func(struct employee *e)
{
    if(e->salary>30000)
    {
        e->salary=e->salary+((e->salary/100)*5);
    }
    else
    {
        e->salary=e->salary+((e->salary/100)*10);
    }
}