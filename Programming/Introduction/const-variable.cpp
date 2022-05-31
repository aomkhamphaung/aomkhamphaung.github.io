#include<iostream>
using namespace std;
int main(){
    const int LENGTH = 20;
    const int WIDTH = 5;
    const string NAME = "Rectangle";
    int area;

    area = LENGTH * WIDTH;
    cout<<"\nlength: "<<LENGTH;
    cout<<"\nwidth: "<<WIDTH;
    cout<<"\narea: "<<area;
    cout<<"\nname: "<<NAME;
}