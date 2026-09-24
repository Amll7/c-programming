#include<stdio.h>
struct patient
{
    int userid;
    char name[50];
    int age;
    char gender[20];
    long long int phonenumber;
    char registrationDate[15];
};
void patientregistration(struct patient pat[],int *patientcount);
void patientsearch(struct patient pat[],int *patientcount);
void patientupdate(struct patient pat[],int *patientcount);
void patientdelete(struct patient pat[],int *patientcount);
int main()
{
int choice;
struct patient pat[1000];
int patientcount = 0;
char doctors,test;
int consultfee1=500,consultfee2=1000,consultfee3=700,consultfee4=1200;
int labfee1=50,labfee2=100,labfee3=200,labfee4=120;
int consultationFee = 0,labtestfee = 0,pharmbill = 0;
float sub_Total,gst;

while(choice != 7)
{
printf("===============================\n");
printf("   HOSPITAL MANAGEMENT SYSTEM  \n");
printf("===============================\n");
printf("1.Patient Registration\n");
printf("2.Search Patient Details\n");
printf("3.Update Patient Details\n");
printf("4.Delete Patient\n");
printf("4.lab test\n");
printf("5.Pharmacy\n");
printf("6.Billing\n");
printf("7.Exit\n");
printf("Enter the choice:");
scanf("%d",&choice);
switch(choice)
 {
    case 1:
        patientregistration(pat,&patientcount);
        break;

    case 2:
       patientsearch(pat,&patientcount);
        break;
    
    case 3:
         patientupdate(pat,&patientcount);
         break;
    case 4:
         patientdelete(pat,&patientcount);
         break;


    case 7:
        printf("Thank you! Get well soon!\n");
        break;

    default:
        printf("Invalid Choice\n");
 }
 } 
 return 0;

}
void patientregistration(struct patient pat[],int *patientCount)
{
  printf("\n\n\n===============================\n");
        printf("     PATIENT REGISTRATION      \n");
        printf("===============================\n");

        printf("Enter patient name:\n");
        scanf("%s",pat[*patientCount].name);

        printf("Enter User ID:");
        scanf("%d",&pat[*patientCount].userid);

        printf("Enter user age:\n");
        scanf("%d",&pat[*patientCount].age);

        printf("Enter user phone number:\n");
        scanf("%lld",&pat[*patientCount].phonenumber);

        printf("Enter User Gender:\n");
        scanf("%s", pat[*patientCount].gender);

        printf("Enter registration date: ");
        scanf("%s", pat[*patientCount].registrationDate);

        (*patientCount)++;

        printf("_____________________________________________\n");
        printf("Patient registration successful\n\n\n\n");
}
void patientsearch(struct patient pat[], int *patientcount)
{
    int check;
    int i;
    int flag = 0;

    printf("Enter the User ID of the patient: ");
    scanf("%d", &check);

    for(i = 0; i < *patientcount; i++)
    {
        if(pat[i].userid == check)
        {
            printf("\nPatient Found!\n");

            printf("ID: %d\n", pat[i].userid);
            printf("Name: %s\n", pat[i].name);
            printf("Age: %d\n", pat[i].age);
            printf("Phone: %lld\n", pat[i].phonenumber);
            printf("Gender: %s\n", pat[i].gender);
            printf("Registration Date: %s\n",
                   pat[i].registrationDate);

            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("Patient not found.\n");
    }
}
void patientupdate(struct patient pat[],int *patientcount)
{
int check;
printf("Enter the User ID of the patient:");
scanf("%d",&check);
int i;
int flag=0;
for(i=0;i<*patientcount;i++)
{
  if(pat[i].userid==check)
  {
     printf("\nPatient Found!\n");

        printf("Enter patient name:\n");
        scanf("%s",pat[i].name);

        printf("Enter user age:\n");
        scanf("%d",&pat[i].age);

        printf("Enter user phone number:\n");
        scanf("%lld",&pat[i].phonenumber);

        printf("Enter User Gender:\n");
        scanf("%s", pat[i].gender);


         flag = 1;
         printf("_____________________________________________\n");
         printf("Patient updation successful\n\n\n\n");
     }
   }

    if(flag == 0)
    {
        printf("\nPatient not found.\n");
    }
  }
  void patientdelete(struct patient pat[],int *patientcount)
  {
    int i,j;
    int flag=0;
    int check;
    printf("Enter the User ID of the patient:");
    scanf("%d",&check);
    for(i=0;i<*patientcount;i++)
    {
    if(pat[i].userid==check)
    {
      for(j=i;j<*patientcount;j++)
      {
        pat[j]=pat[j+1];
      }
      flag=1;
      *patientcount--;
    }
    }


    if(flag == 0)
    {
        printf("\nPatient not found.\n");
    }
  
}