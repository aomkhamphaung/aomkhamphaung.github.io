#include<iostream>
using namespace std;
int main(){
    int a,b;
    a = 7;
    b = 2;

    cout<<"a = "<<a;
    cout<<"b = "<<b;

    a += b;
    b += 5;

    cout<<"After a += b, a = "<<a;
    cout<<"After b += 5, b = "<<b;
}