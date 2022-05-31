#include<iostream>
using namespace std;
int main(){
    float amount;
    float rate;
    int month;

    cout<<"Enter loan amount: ";
    cin>>amount;
    cout<<"Enter rate: ";
    cin>>rate;
    cout<<"Enter the number of months: ";
    cin>>month;

    float monthly_int = amount * (rate / 100);
    float total_int = (amount * (rate / 100)) * month;
    cout<<"Monthly interest: "<<monthly_int<<endl;
    cout<<"Total interest: "<<total_int;
}