#include<stdio.h>
#include<string.h>
struct Medicalrecord
{
   
    char visitDate[50];
    char diagnosis[100];
    char prescription[200];
};
struct billing
{
    int consultationfee;
    int labtestfee;
    int pharmacybill;
    float subtotal;
    float gst;
    float total;
};
struct patient
{
    int userid;
    char name[50];
    int age;
    char gender[20];
    long long int phonenumber;
    char registrationDate[15];
    struct Medicalrecord records[20];
    int recordcount;
    struct billing bill;
};
void patientregistration(struct patient pat[],int *patientcount);
void patientsearch(struct patient pat[],int *patientcount);
void patientupdate(struct patient pat[],int *patientcount);
void patientdelete(struct patient pat[],int *patientcount);
void addmedicalrecords(struct patient pat[], int *patientcount);
void viewmedicalrecords(struct patient pat[], int *patientcount);
void createbill(struct patient pat[],int *patientcount);
void generatebill(struct patient pat[],int *patientcount);

int main()
{
int choice=0;
struct patient pat[1000];
int patientcount = 0;

while(choice != 9)
{
printf("===============================\n");
printf("   HOSPITAL MANAGEMENT SYSTEM  \n");
printf("===============================\n");
printf("1.Patient Registration\n");
printf("2.Search Patient Details\n");
printf("3.Update Patient Details\n");
printf("4.Delete Patient\n");
printf("5.Add Medical Record of Patient\n");
printf("6.View Medical Records\n");
printf("7.Create Bill\n");
printf("8.Print Bill\n");
printf("9.Exit\n");
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
    case 5:
          addmedicalrecords(pat,&patientcount);
          break;
    case 6:
          viewmedicalrecords(pat,&patientcount);
          break;
    case 7:
          createbill(pat,&patientcount);
          break;

    case 8:
          generatebill(pat,&patientcount);
          break;     

    case 9:
        printf("\nThank you! Get well soon!\n");
        break;

    default:
        printf("Invalid Choice\n");
 }
 } 
 return 0;
}


void patientregistration(struct patient pat[],int *patientcount)
{
  printf("\n\n\n===============================\n");
        printf("     PATIENT REGISTRATION      \n");
        printf("===============================\n");

        printf("Enter patient name: ");
        scanf("%s",pat[*patientcount].name);

        printf("Enter User ID: ");
        scanf("%d",&pat[*patientcount].userid);

        printf("Enter user age: ");
        scanf("%d",&pat[*patientcount].age);

        printf("Enter user phone number: ");
        scanf("%lld",&pat[*patientcount].phonenumber);

        printf("Enter User Gender: ");
        scanf("%s", pat[*patientcount].gender);

        printf("Enter registration date: ");
        scanf("%s", pat[*patientcount].registrationDate);
        pat[*patientcount].recordcount = 0;
        (*patientcount)++;

        printf("_____________________________________________\n");
        printf("Patient registration successful\n\n\n\n");
}
void patientsearch(struct patient pat[], int *patientcount)
{
    int check;
    int i;
    int flag = 0;
  printf("\n\n\n===============================\n");
        printf("         PATIENT SEARCH          \n");
        printf("===============================\n\n");
    printf("Enter the User ID of the patient: ");
    scanf("%d", &check);

    for(i = 0; i < *patientcount; i++)
    {
        if(pat[i].userid == check)
        {
            printf("\nPatient Found!!\n");

            printf("ID                 :   %d\n", pat[i].userid);
            printf("Name               :   %s\n", pat[i].name);
            printf("Age                :   %d\n", pat[i].age);
            printf("Phone              :   %lld\n", pat[i].phonenumber);
            printf("Gender             :   %s\n", pat[i].gender);
            printf("Registration Date  :   %s\n",pat[i].registrationDate);

            flag = 1;
             printf("_____________________________________________\n");
             printf("Patient search successful\n\n\n\n");
            break;
        }
    }

    if(flag == 0)
    {
        printf("Patient not found.\n\n\n");
    }
}
void patientupdate(struct patient pat[],int *patientcount)
{
int check;
 printf("\n\n\n===============================\n");
        printf("        PATIENT UPDATION       \n");
        printf("===============================\n");
printf("Enter the User ID of the patient:");
scanf("%d",&check);
int i;
int flag=0;
for(i=0;i<*patientcount;i++)
{
  if(pat[i].userid==check)
  {
     printf("\nPatient Found!\n");

        printf("Enter patient name: ");
        scanf("%s",pat[i].name);

        printf("Enter user age: ");
        scanf("%d",&pat[i].age);

        printf("Enter user phone number: ");
        scanf("%lld",&pat[i].phonenumber);

        printf("Enter User Gender: ");
        scanf("%s", pat[i].gender);


         flag = 1;
         printf("_____________________________________________\n");
         printf("Patient updation successful\n\n\n\n");
     }
   }

    if(flag == 0)
    {
        printf("\nPatient not found.\n\n\n");
    }
  }
  void patientdelete(struct patient pat[],int *patientcount)
  {
    int i,j;
    int flag=0;
    int check;
    printf("\n\n\n===============================\n");
        printf("        PATIENT DELETION       \n");
        printf("===============================\n");
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
        printf("_____________________________________________\n");
        printf("Patient deletion successful.\n\n\n\n");
       break;

    }
    }


    if(flag == 0)
    {
        printf("\nPatient not found.\n");
    }
  
}
void addmedicalrecords(struct patient pat[], int *patientcount)
{
    int check;
    int flag=0;
    printf("ADDING THE MEDICAL RECORDS...\n");
    printf("Enter the User ID: ");
    scanf("%d",&check);
    for(int i=0;i<*patientcount;i++)
    {
        if(pat[i].recordcount>=20)
        {
            printf("Maximum Record Count Reached!!");
            flag=1;
            break;
        }
        if(check==pat[i].userid)
        {
        printf("Enter the Visit Date: ");
        scanf("%s",pat[i].records[pat[i].recordcount].visitDate);
        printf("Enter the Diagnosis Details:");
        scanf("%s",pat[i].records[pat[i].recordcount].diagnosis);
        printf("Enter the Prescription:");
        scanf("%s",pat[i].records[pat[i].recordcount].prescription);
        pat[i].recordcount++;
        flag=1;
        }
    }
    if(flag==0)
    {
        printf("No Patient Found...\n\n\n");
    }
}
void viewmedicalrecords(struct patient pat[],int *patientcount)
{
    int check,i,flag=1,flag2=1;
    char visit[50];
    printf("Enter the User ID of the patient: ");
    scanf("%d",&check);
    for(i=0;i< *patientcount;i++)
    {
        if(pat[i].userid==check)
        {
            flag2=0;
            printf("Enter the visited date: ");
            scanf("%s",visit);
            for(int j=0;j<pat[i].recordcount;j++)
            {
                if (strcmp(visit,pat[i].records[j].visitDate)==0)
                {
                printf("\n\n\n===============================\n");
                   printf("         MEDICAL RECORD        \n");
                   printf("===============================\n\n");
                printf("VISIT DATE:%s\n",pat[i].records[j].visitDate);
                printf("DAIGNOSIS:%s\n",pat[i].records[j].diagnosis);
                printf("PRESCRIPTION:%s\n\n\n\n",pat[i].records[j].prescription);
                flag=0;
                break;
                }
            }
            if(flag==1)
            {
                printf("RECORD NOT FOUND...\n\n\n");
            }
        }
        break;
    }
    if(flag2)
    {
        printf("USER NOT FOUND...\n\n\n");
    }
}
void createbill(struct patient pat[],int *patientcount)
{
    int check;
    int select;
    printf("\n\n\n===============================\n");
       printf("            BILLING            \n");
       printf("===============================\n\n");
    printf("Enter the User ID of the patient: ");
    scanf("%d",&check);
    for(int i=0;i<*patientcount;i++)
    {
        if(check==pat[i].userid)
        {
            printf("Select the consultation:\n");
            printf("1.GENERAL CONSULATION : 500\n");
            printf("2.SPECIALISED CONSULATION : 1000\n");
            printf("3.EMERGENCY CONSULATION : 1200\n");
            printf("Enter the choice: ");
            scanf("%d",&select);
            switch(select)
            {
                case 1:
                {
                  pat[i].bill.consultationfee=500;
                  break;
                }
                case 2:
                {
                  pat[i].bill.consultationfee=1000;
                  break;
                }
                case 3:
                {
                  pat[i].bill.consultationfee=1200;
                  break;
                }
                default:
                printf("Invalid Input");
                pat[i].bill.consultationfee=0;

            }
            select=0;
            pat[i].bill.labtestfee = 0;
            while(select!=6 || select!=5)
            {
            printf("\nSelect the Lab Tests:\n");
            printf("1. Blood Test : 50\n");
            printf("2. Urine Test : 100\n");
            printf("3. X-Ray      : 200\n");
            printf("4. MRI        : 500\n");
            printf("5. No Lab Test\n");
            printf("6.Done\n");
            printf("Enter the choices: ");

            scanf("%d", &select);
    
            switch(select)
            {
                case 1:
                pat[i].bill.labtestfee = pat[i].bill.labtestfee+50;
                printf("\nBlood Test Selected.\n");
                break;

                case 2:
                pat[i].bill.labtestfee = pat[i].bill.labtestfee+100;
                 printf("\nUrine Test Selected.\n");
                break;

                case 3:
                pat[i].bill.labtestfee = pat[i].bill.labtestfee+200;
                printf("\nX-Ray Selected.\n");
                break;

                case 4:
                pat[i].bill.labtestfee = pat[i].bill.labtestfee+500;
                 printf("\nMRi Scan Selected.\n");
                break;

                case 5:
                pat[i].bill.labtestfee = 0;
                printf("\nNo Test Selected.\n");
                break;
                case 6:
                break;
                

                default:
                printf("Invalid Input\n");
                pat[i].bill.labtestfee = 0;
            }
            printf("Do you want to Enter any other Tests?\n");
            printf("1.Yes\n");
            printf("2.No\n");
            printf("Enter Your choice: ");
            int another;
            scanf("%d",&another);
        }

            printf("\nEnter Pharmacy Bill:");
            scanf("%d",&pat[i].bill.pharmacybill);
            
            pat[i].bill.subtotal=pat[i].bill.consultationfee+pat[i].bill.pharmacybill+pat[i].bill.labtestfee;
            pat[i].bill.gst=(pat[i].bill.subtotal*18)/100;
            pat[i].bill.total=pat[i].bill.subtotal+pat[i].bill.gst;



        }
    }
}
void generatebill(struct patient pat[],int *patientcount)
{
    int check;
    printf("Enter the User ID of the patient");
    scanf("%d",&check);
    for(int i=0;i<*patientcount;i++)
    {
        if(check==pat[i].userid)
        { 
         printf("\n========================================\n");
         printf("              HOSPITAL BILL               \n");
         printf("==========================================\n");
         printf("PATIENT NAME          :%s                 \n",pat[i].name);
         printf("PATIENT ID            :%d                 \n\n",pat[i].userid);
         printf("==========================================\n");
         printf("CONSULTATION          :%d                 \n",pat[i].bill.consultationfee);
         printf("LAB FEE               :%d                 \n",pat[i].bill.labtestfee);
         printf("PHARMACY              :%d                 \n\n",pat[i].bill.pharmacybill);
         printf("------------------------------------------\n");
         printf("SUB TOTAL             :%.2f               \n",pat[i].bill.subtotal);
         printf("GST                   :%.2f               \n\n",pat[i].bill.gst);
         printf("------------------------------------------\n");
         printf("SUB TOTAL             :%.3f               \n",pat[i].bill.total);
         printf("==========================================\n\n\n");


         

        }
    }
}