#include <stdio.h>
int main()
{
    int marks;
    printf("enter the marks:");
    scanf ("%d",&marks);
    if (marks>=60){
    printf("SECOND CLASS");
    }
    else if(marks>=90){
    printf("DISTINCTION");
    }
    else if(marks>=70){
     printf("FIRST CLASS");
     }
     else{
    printf("FAILED");
    }
    return 0;
}