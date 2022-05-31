#include<iostream>
using namespace std;
int main(){
    int total_days;
    cout<<"Enter the number of days: ";
    cin>>total_days;

    int years = total_days / 365;
    int months = (total_days % 365) / 12;
    int days = (total_days % 365) % 365;

    cout<<"The result is "<<years<<" years, "<<months<<"months and "<<days<<"days";
}