#include<stdio.h>
int availiable_items=0;
void produce();
void consume();
void display();
int main()
{
int choice;
while(choice!=4)
{
printf("\n\n\n\n==================================\n");
printf("   PRODUCER-CONSUMER SIMULATION   \n");
printf("==================================\n");

printf("1.Produce\n");
printf("2.Consume\n");
printf("3.Display Availiable items\n");
printf("4.Exit\n");
printf("Enter the choice:");
scanf("%d",&choice);

switch(choice)
{
    case 1:
    {
      produce();
      break;  
    }
    case 2:
    {
      consume();
      break;
    }
    case 3:
    {
        display();
        break;
    }
    case 4:
    {
        printf("YOU HAVE SUCCESSFULLY EXITED THE SIMULATION\n");
        break;
    }
    default:
    {
      printf("INVAILD INPUT\n");
    }

}
}
}
void produce()
{
    if(availiable_items>=10)
    {
        printf("STORAGE FULL!! CONSUMER MUST CONSUME BEFORE PRODUCING\n");
        printf("AVAILIABLE ITEMS=%d\n",availiable_items);
    }
    else if(availiable_items<10)
    {
        availiable_items++;
        printf("AVAILIABLE ITEMS=%d\n",availiable_items);
    }
}
void consume()
{
    if(availiable_items<=0)
    {
        printf("NO AVAILIABLE ITEMS ARE AVAILIABLE\n");
        printf("AVAILIABLE ITEMS=%d\n",availiable_items);
    }
    else if(availiable_items>0)
    {
        availiable_items--;
        printf("AVAILIABLE ITEMS=%d\n",availiable_items);
    }

}
void display()
{
        
     printf("AVAILIABLE ITEMS=%d\n",availiable_items);
    
}

