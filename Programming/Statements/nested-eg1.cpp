#include<iostream>
using namespace std;
int main(){
    int num;

    cout<<"Enter any number: ";
    cin>>num;

    if(num % 5 == 0 || num % 3 == 0){
        if(num % 3 == 0){
            cout<<num<<" is divisible with only 3."
        }
        else{
            cout<<num<<" is divisible with only 5."
        }
    }
    else{
        cout<<num<<" is not divisible with 3 or 5.";
    }
}