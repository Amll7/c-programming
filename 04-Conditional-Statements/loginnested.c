#include <stdio.h>

int main()
{
    int userid = 123456,password = 6606 ;
    int ip_userid,ip_pass;
    printf("Enter the userid:\n ");
    scanf("%d", &ip_userid);
    

    if (ip_userid == userid)
    {
       printf("Enter the password: ");
       scanf("%d", &ip_pass);
       if (ip_pass <= password)
       {
        printf("logged in");
       }

        
       else
       {
        
        printf("wrong password");
       }
    }    
    else
        printf("invalid user id");
    
    return 0;
}