#include <stdio.h>
int main()
{
    int marks;
    printf("enter the marks:");
    scanf ("%d",&marks);
    if (marks>=90){
    printf("DISTINCTION\n");
    }
    else if(marks>=70){
    printf("FIRST CLASS");
    }
    else if(marks>=60){
     printf("SECOND CLASS");
     }
     else{
    printf("FAILED");
    }
    return 0;
}


