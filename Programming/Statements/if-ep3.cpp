#include<iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    cout<<"Enter number1: ";
    cin>>num1;
    cout<<"Enter number2: ";
    cin>>num2;
    cout<<"Enter number3: ";
    cin>>num3;

    int max_num = num1;
    if(max_num < num1){
        max_num = num2;
    }
    if(max_num < num3){
        max_num = num3;
    }

    cout<<"Maximum number is "<<max_num;
}