#include<iostream>
using namespace std;
int main(){
    char grade;

    cout<<"Enter your grade: ";
    cin>>grade;

    switch(grade){
        case 'A':
        cout<<"Excellent!"<<endl;
        break;
        case 'B':
        cout<<"Credit!"<<endl;
        break;
        case 'C':
        cout<<"Well done!"<<endl;
        break;
        case 'D':
        cout<<"Passed!"<<endl;
        break;
        case 'E':
        cout<<"Better! Try again!"<<endl;
        break;
        default:
        cout<<"Invalid grade!";
    }
}