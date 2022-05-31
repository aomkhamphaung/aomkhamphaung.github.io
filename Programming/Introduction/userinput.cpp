#include<iostream>
using namespace std;
int main(){
    int emp_no;
    string name;
    string city;
    float salary;
    char ch;

    cout<<"------User Input------\n";
    cout<<"Enter Employee No: ";
    cin>>emp_no;
    cin.ignore();
    cout<<"Enter name: ";
    //cin>>name;
    getline(cin, name);
    cout<<"Enter city: ";
    cin>>city;
    cout<<"Enter salary: ";
    cin>>salary;
    cout<<"Enter any single character: ";
    cin>>ch;

    cout<<"Emp no: "<<emp_no;
    cout<<"\nEmployee : "<<name;
    cout<<"\nCity: "<<city;
    cout<<"\nSalary: "<<salary;
    cout<<"\nCharacter: "<<ch;
}