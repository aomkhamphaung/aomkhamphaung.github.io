#include<iostream>
using namespace std;
int main(){
    int total_second;

    cout<<"Enter total second: ";
    cin>>total_second;

    int hours = total_second / 3600;
    int minutes = (total_second % 3600) / 60;
    int seconds = (total_second % 3600) % 60;

    cout<<hours<<" hours:"<<minutes<<" minutes:"<<seconds<<" seconds";
}