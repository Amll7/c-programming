#include<iostream>
using namespace std;
class Students
{
    int id;
    string name;
    int dob;
    void display()
    {
        cout<<"Id: "<<id<<endl
        <<"name: "<<name<<endl
        <<"dob: "<<dob<<endl<<endl;
    }
    void read()
    {
        cout<<"Enter the details of the student:ID,Name,Dob"<<endl;
        cin>>id;
        cin>>name;
        cin>>dob;
    }
};
int main()
{
    Students s1,s2;
    s1.id=100;
    s1.read();
    s1.display();
    s2.read();
    s2.display();
}