#include<iostream>
using namespace std;
int main(){
    int price;
    int dis_value;

    cout<<"Enter the original price: ";
    cin>>price;
    cout<<"Enter discount value: ";
    cin>>dis_value;

    int after_dis = price - (price / dis_value);
    cout<<"After discount, price = "<<after_dis;
}