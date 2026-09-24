#include<stdio.h>
struct book
{
    char title[30];
    int price;
    char author[100];
};
void func(struct book *p);
int main()
{
    struct book p1;
    printf("Enter the book title:");
    scanf("%s",p1.title);
    printf("Enter the author name:");
    scanf("%s",&p1.author);
    printf("Enter the book price:");
    scanf("%d",&p1.price);
    func(&p1);
}
void func(struct book *p1)
{
    printf("book title:%s\n",p1->title);
    printf("author name:%s\n",p1->author);
    printf("price:%d\n",p1->price);
}