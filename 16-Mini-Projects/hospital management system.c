#include<stdio.h>
int main()
{
int choice,userid,age;
long long int phonenumber;
char doctors,test;
int consultfee1=500,consultfee2=1000,consultfee3=700,consultfee4=1200;
int labfee1=50,labfee2=100,labfee3=200,labfee4=120;
int consultationFee = 0,labtestfee = 0,pharmbill = 0;
float sub_Total,gst;

do 
{
printf("===============================\n");
printf("   HOSPITAL MANAGEMENT SYSTEM  \n");
printf("===============================\n");
printf("1.Patient Registration\n");
printf("2.View Patient details\n");
printf("3.Consulting Doctors\n");
printf("4.lab test\n");
printf("5.Pharmacy\n");
printf("6.Billing\n");
printf("7.Exit\n");
printf("Enter the choice:");
scanf("%d",&choice);
switch(choice)
 {
    case 1:
        printf("===============================\n");
        printf("     PATIENT REGISTRATION      \n");
        printf("===============================\n");

        printf("Enter user ID:\n");
        scanf("%d",&userid);
        printf("Enter user age1:\n");
        scanf("%d",&age);
        printf("Enter user phone number:\n");
        scanf("%lld",&phonenumber);

        printf("_____________________________________________\n");
        printf("Patient registration successful\n");
        break;

    case 2:
        printf("View Patient Details\n");
        printf("User id: %d\n",userid);
        printf("User age: %d \n",age);
        printf("User ph: %lld \n",phonenumber);
        break;

    case 3:
        printf("Doctor Consultation\n");
        printf("a.General Physician\nb.Cardiologist\nc.Orthopedic\nd.Neurologist\n");
        printf("Select the doctor you want to consult:");
        scanf(" %c",&doctors);
        switch(doctors)
        {
        case 'a':
          printf("Consultation booked for General physician\n");
          printf("Consulation fees is %d\n",consultfee1);
          consultationFee = consultfee1;
          break;
        case 'b':
          printf("Consultation booked for Cardiologist\n");
          printf("Consultation fees is %d\n",consultfee2);
          consultationFee = consultfee2;
          break;
        case 'c':
          printf("Consultation booked for orthopedic\n");
          printf("Consultation fees is %d\n",consultfee3);
          consultationFee = consultfee3;
          break;
        case 'd':
          printf("Consultation booked for neurologist\n");
          printf("Consultation fees is %d\n",consultfee4);
          consultationFee = consultfee4;
          break;
        default :
          printf("invalid input");
          break;
        }
        break;
    case 4:
        printf("a.Blood test\nb.urine test\nc.ECG\nd.X-Ray\n");
        printf("Select the test you want to take:");
        scanf(" %c",&test);
        switch(test)
        {
        case 'a':
        printf("Blood test\n");
        printf("Lab fees is %d\n",labfee1);
        labtestfee=labfee1;
        break;
        case 'b':
        printf("Urine Test\n");
        printf("Lab fees is %d\n",labfee2);
        labtestfee=labfee2;
        break;
        case 'c':
        printf("ECG\n");
        printf("Lab fees is %d\n",labfee3);
        labtestfee=labfee3;
        break;
        case 'd':
        printf("X-ray\n");
        printf("lab fees is %d\n",labfee4);
        labtestfee=labfee4;
        break;
        default :
        printf("invalid input\n");
        break;
        }
        break;
    case 5:
        printf("Enter the pharmacy bill amount:");
        scanf("%d",&pharmbill);
        prinf("Total pharmacy bill is %d",pharmbill);
        break;
    case 6:
        sub_Total = consultationFee+labtestfee+pharmbill;
        gst = sub_Total*5/100;

        printf("===============================\n");
        printf("        HOSPITAL BILL         \n");
        printf("===============================\n");


        printf("View Patient Details\n");
        printf("Patient id: %d\n",userid);
        printf("Patient age: %d \n",age);
        printf("Patient ph: %lld \n",phonenumber);

        printf("_____________________________________________\n");

        printf("consultation fee: %d\n",consultationFee);
        printf("lab fee: %d\n",labtestfee);
        printf("pharmacy Bill: %d\n",pharmbill);
        

        printf("_____________________________________________\n");


        printf("sub Total: %f\n",sub_Total);
        printf("gst: %f\n",gst);


        printf("_____________________________________________\n");

        printf("Grand Total: %f\n",sub_Total+gst);
        
        printf("_____________________________________________\n");

         printf("Thank you! Get well soon!\n");

         printf("_____________________________________________\n");
        break;

    case 7:
        printf("Thank you! Get well soon!\n");
        break;

    default:
        printf("Invalid Choice\n");
 }
 } while(choice != 7);
 return 0;

}