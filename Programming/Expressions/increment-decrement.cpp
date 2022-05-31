#include<iostream>
using namespace std;
int main(){
    int var1 = 5, var2 = 5;
    cout<<"var1 = "<<var1; 

    //int result = ++var1 - 2; // 6-2=4
    int result = var1++ - 2;// 5-2=3 / var 1 = 6
    cout<<"\nAfter increment, var1 = "<<var1;
    cout<<"\nResult = "<<result;

    result = var2-- - 2; // 5 - 2/ var 2 = 4
    cout<<"\nAfter decrement, var2 = "<<var2;
    cout<<"\nResult = "<<result;
}