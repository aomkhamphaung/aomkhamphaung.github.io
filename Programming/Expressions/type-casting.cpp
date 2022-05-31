#include<iostream>
using namespace std;
int main(){
    int a = 100;
    float b = 2.5;

    int c = (int) b; //explicit type conversion
    cout<<"b = "<<b;
    cout<<"\nc = "<<c;

    float d = a; //implicit type conversion
    cout<<"\na = "<<a;
    cout<<"\nd = "<<d;
}