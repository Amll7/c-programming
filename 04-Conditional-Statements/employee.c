#include <stdio.h>
int main()
{
    int experience;
    printf("enter the experience level of employee:\n");
    scanf("%d",&experience);
if (experience <2)
    printf("fresher");
else if (experience< 5)
    printf("med level emplyeee");
else
 printf("senior employee");
return 0;
}
