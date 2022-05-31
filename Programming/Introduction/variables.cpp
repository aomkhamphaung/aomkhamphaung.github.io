#include<iostream>
using namespace std;

int a = 10; //global variable
void display() {
    int a = 20; //local variable
    cout<<"\nValue of a inside fun: "<<a;
}
void displayAnother(int a) { // parameter
    cout<<"\nValue of a inside fun: parameter: "<<a;
}

int main() {
    cout<<"\nValue of a: "<<a;
    display();
    displayAnother(100);
    // {
    //     int a = 200;
    //     int b = 300;
    //     cout<<"\nValue of a: "<<a;
    //     cout<<"\nValue of b: "<<b;
    // }
    cout<<"\nValue of a: "<<a;
    //cout<<"\nValue of b: "<<b; ==> can't access
}