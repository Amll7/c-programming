#include<stdio.h>
#include<stdlib.h>
int display(void *ptr,int charflag1,int charflag2,int shortflag,
             int intflag,int floatflag,int doubleflag);
int main()
{
    int choice=0;
    int option=0;
    int index=0;
    int charflag1=0;
    int charflag2=0;
    int shortflag=0;
    int intflag=0;
    int floatflag=0;
    int doubleflag=0;
    void *num=malloc(8);
    do{
    printf("──────────────────────\n");    
    printf("         MENU         \n");
    printf("──────────────────────\n");
    printf("1. Add element\n");
    printf("2. Remove element\n");
    printf("3. Display element\n");
    printf("4. Exit from the program\n");
    printf("─────────────────────────────\n");
    printf("Enter the input: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
               printf("< Enter the type you have to insert:\n\n");
               
               printf("1. int\n");
               printf("2. char\n");
               printf("3. float\n");
               printf("4. short\n");
               printf("5. double\n");
               printf("─────────────────────────────\n");
               printf("Enter the input: ");
               scanf("%d",&option);
               switch(option)
               {
                   case 1:
                         if(doubleflag==0&&floatflag==0&&intflag==0)
                         {
                           printf("Enter the integer: ");
                           scanf(" %d",(int*)num+1); 
                           intflag=1;
                           break;
                         }
                         else
                         {
                           printf("Don't have enough space to store a integer.\n");
                           break;  
                         }
                   case 2:
                         if(doubleflag==0&&charflag1==0)
                         {
                           printf("Enter the character: ");
                           scanf(" %c",(char*)num); 
                           charflag1=1;
                           break;
                         }
                           
                         
                         else if(doubleflag==0&&charflag2==0)
                         {
                           printf("Enter the character: ");
                           scanf(" %c",(char*)num+1); 
                           charflag2=1;
                           break;
                         }
                         else
                         {
                             printf("Don't have enough space to store a character.\n");
                             break;
                         }
                    case 3:
                           if(doubleflag==0&&intflag==0&&floatflag==0)
                         {
                           printf("Enter the float value: ");
                           scanf(" %f",(float*)num+1); 
                           floatflag=1;
                           break;
                         }
                         else
                         {
                           printf("Don't have enough space to store a float.\n");
                           break;  
                         }
                    case 4:
                            if(doubleflag==0&&shortflag==0)
                            {
                             printf("Enter the short value: ");
                             scanf(" %hd",(short*)num+1); 
                             shortflag=1;
                             break;
                            }
                           else
                           {
                            printf("Don't have enough space to store a short.\n");
                            break;  
                           }
                          
                    case 5:
                           if(doubleflag==0&&floatflag==0&&intflag==0&&charflag1==0&&charflag2==0&&shortflag==0)
                           {
                             printf("Enter the double value: ");
                             scanf(" %lf",(double*)num); 
                             doubleflag=1;
                             break;
                           }
                           else
                          {
                           printf("Don't have enough space to store a double.\n");
                           break;  
                          }
                    default:
                            printf("Invalid input!!\n");
                            break;
               }
               break;
        case 2: 
                printf("────────────────────────\n");
                printf("     REMOVE ELEMENTS    \n");
                printf("────────────────────────\n");
                display(num,charflag1,charflag2,shortflag,intflag,floatflag,doubleflag);
                printf("< Enter the index you want to remove:\n\n");
               
                printf("Index 0\n");
                printf("Index 1\n");
                printf("Index 2\n");
                printf("index 4\n");
                printf("Go back to menu\n");
                printf("─────────────────────────────\n");
                printf("Enter the input: ");
                scanf("%d",&index);
                if(index>4&&index<0&index==3)
                {
                    printf("Invalid Input!!");
                    break;
                }
                if(index==0)
                {
                    if(charflag1==1)
                    {
                        charflag1=0;
                    }
                    else if(doubleflag==1)
                    {
                        doubleflag=0;
                    }
                    else
                    {
                        printf("NO ELEMENT IS PRESENT IN THIS INDEX.");
                    }
                }
                else if(index==1)
                {
                  if(charflag2==1)
                    {
                        charflag2=0;
                    }
                    else
                    {
                        printf("NO ELEMENT IS PRESENT IN THIS INDEX.");
                    }  
                }
                else if(index==2)
                {
                    if(shortflag==1)
                    {
                        shortflag=0;
                    }
                    else
                    {
                        printf("NO ELEMENT IS PRESENT IN THIS INDEX.");
                    }  
                }
                else if(index==4)
                {
                   if(intflag==1)
                    {
                        intflag=0;
                    }
                    else if(floatflag==1)
                    {
                        floatflag=0;
                    }
                    else
                    {
                        printf("NO ELEMENT IS PRESENT IN THIS INDEX.");
                    } 
                }
                else if(index==5)
                {
                    break;
                }
            break;    
                    
        case 3: 
                printf("────────────────────────\n");
                printf("     ELEMENTS PRESENT   \n");
                printf("────────────────────────\n");
                display(num,charflag1,charflag2,shortflag,intflag,floatflag,doubleflag);
                break;
                
        case 4:
               printf("\nExiting....\n");
    }
    
    }while(choice!=4);
    
    
}
int display(void *ptr,int charflag1,int charflag2,int shortflag,
            int intflag,int floatflag,int doubleflag)
{
    
    if(charflag1==1)
    {
        printf("0. %c\n",((char*)ptr)[0]);
    }
    else if(doubleflag==1)
    {
       printf("0. %lf\n",((double*)ptr)[0]);
       return 0;
       
    }
    else
    {
        printf("0.The index 1 is Empty\n");
    }
    if(charflag2==1)
    {
        printf("1. %c\n",((char*)ptr)[1]);
    }
    else
    {
        printf("1.The index 2 is Empty\n");
    }
    if(shortflag==1)
    {
        printf("2. %hd\n",((short*)ptr)[1]);
    }
    else
    {
        printf("2.The index 3 is Empty\n");
    }
    if(intflag==1&&floatflag==0)
    {
        printf("4. %d\n",((int*)ptr)[1]);
        return 0;
    }
    else if(intflag==0&&floatflag==1)
    {
        printf("4. %f\n",((float*)ptr)[1]);
        return 0;
    }
    else
    {
        printf("4.The index 4 is Empty\n");
    }
    
    
}