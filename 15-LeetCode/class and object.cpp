#include<iostream>
using namespace std;
struct Students
{
    int id=100;
    string name="amal";
    int dob=2003;
    void display()
    {
        cout<<"Id: "<<id<<endl
        <<"name: "<<name<<endl
        <<"dob: "<<dob<<endl<<endl;
    }
};
int main()
{
    struct Students s1,s2;
    s1.display();
    s2.id=200;
    s2.name="kiar";
    s2.dob=2005;
    s2.display();
}