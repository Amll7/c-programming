#include<iostream>
using namespace std;
int main()
{
    int num;
    char ch;
    double d;
    string name;
    cout<<"Enter the number :";
    cin>>num;
     cout<<"Enter the character :";
    cin>>ch;
    cin.ignore();
    cout<<"Enter the name :";
    getline(cin,name);
     cout<<"Enter the double :";
    cin>>d;
   
    cout<<"Num: "<<num<<endl
    <<"character: "<<ch<<endl
    <<"double: "<<d<<endl
    <<"name: "<<name<<endl;
}