#include<iostream>
using namespace std;
int main(){
    int num;
    
    cout<<"Enter any number: ";
    cin>>num;

    if(num % 3 == 0 && num % 5 == 0){
        cout<<num<<" is divisible with both 3 and 5.";
    }
    else if(num % 3 == 0){
        cout<<num<<" is divisible with only 3.";
    }
    else if(num % 5 == 0){
        cout<<num<<" is divisible with only 5.";
    }
    else{
        cout<<num<<" is not divisible with 3 and 5.";
    }
}