#include<iostream>
using namespace std;
struct Students
{
    void display()
    {
        cout<<"Id: "<<id<<endl
        <<"name: "<<name<<endl
        <<"dob: "<<dob<<endl<<endl;
    }
    int id;
    string name;
    int dob;
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
    struct Students s1,s2;
    s1.read();
    s1.display();
    s2.read();
    s2.display();
}