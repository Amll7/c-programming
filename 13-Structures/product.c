#include<stdio.h>
struct product
{
    char name[30];
    int price;
    int quantity;
};
void update(struct product p[]);
void func(struct product p[]);
int main()
{
    struct product p[3];
    int i;
    for(i=0;i<3;i++)
    {
    printf("Enter the product name:");
    scanf("%s",p[i].name);
    printf("Enter the product price:");
    scanf("%d",&p[i].price);
    printf("Enter the product quantity:");
    scanf("%d",&p[i].quantity);
    }
    update(p);
    func(p);
}
void update(struct product p[])
{
    int i;
    for(i=0;i<3;i++)
    {
        p[i].price=p[i].price+(p[i].price/100)*10;
    }
}
void func(struct product p[])
{
    printf("|------------------------------------|\n");
    printf("|name         price        quantity  |\n");
    for(int i=0;i<3;i++)
    {
    printf("|------------------------------------|\n");
    printf("| %s           %d            %d     |\n",p[i].name,p[i].price,p[i].quantity);
    printf("|------------------------------------|\n");
    }

}