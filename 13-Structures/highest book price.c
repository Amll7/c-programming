#include<stdio.h>
struct book
{
    char name[100];
    char title[100];
    int price;
};
void func(struct book s[]);
int main()
{
    struct book s[5];
    int i;
    for(i=0;i<5;i++)
    {
    printf("Enter the book name:");
    scanf("%s",s[i].name);
    printf("Enter the book title:");
    scanf("%s",s[i].title);
    printf("Enter the book price:");
    scanf("%d",&s[i].price);
    }
    func(s);
    return 0;
}
void func(struct book s[])
{
    int highest=s[0].price;
    for(int i=0;i<5;i++)
    {
        if(s[i].price>highest)
        {
            highest=s[i].price;
        }
    }
    for(int i=0;i<5;i++)
    {
        if(s[i].price==highest)
        {
             printf("book name:%s\n",s[i].name);
             printf("book title:%s\n",s[i].title);
             printf("book price:%d\n",s[i].price);
        }
    }

}