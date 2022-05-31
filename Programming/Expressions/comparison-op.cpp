#include<iostream>
using namespace std;
int main(){
    int a = 3, b = 5;
    bool result;

    result = (a == b);
    cout<<"3 == 5 ->"<<result;
    cout<<"\n3 != 5 ->"<<(a != b);
    cout<<"\n3 < 5 ->"<<(a < b);
    cout<<"\n3 <= 5 ->"<<(a <= b);
    cout<<"\n3 > 5 ->"<<(a > b);
    cout<<"\n3 >= 5 ->"<<(a >= b);
}