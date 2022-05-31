#include<iostream>
using namespace std;
int main(){
    float bmi;

    cout<<"Enter BMI value: ";
    cin>>bmi;

    if(bmi < 18.5){
        cout<<"Under Weight";
    }
    else{
        if(bmi >= 18.5 && bmi <= 24.9){
            cout<<"Normal Weight";
        }
        else{
            if(bmi >= 24.9 && bmi <= 29.9){
                cout<<"Over Weight";
            }
            else{
                cout<<"Obesity";
            }
        }
    }
}