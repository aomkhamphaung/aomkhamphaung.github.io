#include<iostream>
using namespace std;
int main(){
    int num;
    string result;

    cout<<"Enter non-zero number: ";
    cin>>num;

    result = (num % 2 == 0) ? "Even" : "Odd";
    cout<<num<<" is "<<result;
}