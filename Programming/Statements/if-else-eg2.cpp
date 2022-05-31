#include<iostream>
using namespace std;
int main(){
    int mark;
    cout<<"Enter your mark: ";
    cin>>mark;

    if(mark < 50){
        cout<<"Failed the exam.";
    }
    else{
        cout<<"Passed the exam.";
    }
}