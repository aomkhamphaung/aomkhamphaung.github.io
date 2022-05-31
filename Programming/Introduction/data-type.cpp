#include<iostream>
using namespace std;

int main(){
    cout<<"size of int: "<<sizeof(int) <<" bytes";
    cout<<"\nsize of short int: "<<sizeof(short int)<<" bytes";
    cout<<"\nsize of long int: "<<sizeof(long int)<<" bytes";
    cout<<"\nsize of float: "<<sizeof(float)<<" bytes";
    cout<<"\nsize of double: "<<sizeof(double)<<" bytes";
    cout<<"\nsize of char: "<<sizeof(char)<<" bytes";
    cout<<"\nsize of string: "<<sizeof(string)<<" bytes";
    cout<<"\nsize of boolean: "<<sizeof(bool)<<" bytes";

    //datatype var-name;
    //datatype var-name = value;

    int mark1, mark2;
    string name;
    float avg;
    char grade;
    int age = 20;//data initialize

    cout<<"\nmark1 = "<<mark1;
    cout<<"\nage = "<<age;

    age = 21;//data assign
    cout<<"\nage = "<<age;
}