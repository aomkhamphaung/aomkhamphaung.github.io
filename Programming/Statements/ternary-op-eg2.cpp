#include<iostream>
using namespace std;
int main(){
    int time;
    cout<<"Enter current time: ";
    cin>>time;

    string result = (time < 10) ? "Good morning!" : (time < 20 ? "Good day!" : "Good evening!");
    cout<<result;
}