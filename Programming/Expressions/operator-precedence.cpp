#include<iostream>
using namespace std;
int main(){
    int a = 13, b = 20, c = 30, d = 40;
    int e;
    e = (a + b) * c / d; // 990/40
    cout<<"e = (a + b) * c / d = "<<e;

    e = ((a + b) * c) / d; 
    cout<<"\ne = ((a + b) * c) / d = "<<e;
    
    e = ( a + b ) * (c / d); 
    cout<<"\ne = ( a + b ) * (c / d) = "<<e;

    e = a + (b * c) / d;
    cout<<"\ne = a + (b * c) / d = "<<e;
}