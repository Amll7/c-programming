#include<stdio.h>
struct employee
{
    char name[100];
    int id;
    int salary;
};
struct employee *func(struct employee e[]);
int main()
{
    struct employee e[2];
    for(int i=0;i<2;i++)
    {
    printf("Enter the employee name:");
    scanf("%s",e[i].name);
    printf("Enter the employee id:");
    scanf("%d",&e[i].id);
    printf("Enter the employee salary :");
    scanf("%d",&e[i].salary);
    }
    struct employee *a=func(e);
    printf("employee name:%s\n",a->name);
    printf("employee id:%d\n",a->id);
    printf("employee salary:%d\n",a->salary);
}
struct employee *func(struct employee e[])
{
    if(e[0].salary>e[1].salary)
    {
        return &e[0];
    }
    else
    {
        return &e[1];
    }
}