#include<stdio.h>
struct product
{
    char name[30];
    int price;
    int quantity;
};
void func(struct product *p,int used);
int main()
{
    struct product p1;
    int used;
    printf("Enter the product name:");
    scanf("%s",p1.name);
    printf("Enter the product price:");
    scanf("%d",&p1.price);
    printf("Enter the product quantity:");
    scanf("%d",&p1.quantity);
    printf("Enter the quanity used:");
    scanf("%d",&used);
    func(&p1,used);
}
void func(struct product *p,int used)
{
    p->quantity=p->quantity-used;
    if(p->quantity>=0)
    {
        printf("stocks left:%d",p->quantity);
    
    }
    else
    {
        printf("Insufficent stocks");
    }
}