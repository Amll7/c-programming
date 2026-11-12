#include<stdio.h>
//#include<stdio.h> no problem in declaring 2 times
#include "header.h"
#include "header.h" //but this creates a problem
//because it copy the contents every time 
//so we have to avoid that using #ifndef 
//we have use a macro name #ifndef
// AND DEFINE that macro
int main()
{
    printf("Hello");
    printf("%d",num);

}