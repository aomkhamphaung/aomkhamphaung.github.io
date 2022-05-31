#include<iostream>
using namespace std;
int main(){
    int dow;
    cout<<"Enter numbers of days of the week(1 ~ 7): ";
    cin>>dow;

    switch(dow)
    {
        case 1:
        cout<<"Sunday"<<endl;
        break;
        case 2:
        cout<<"Monday"<<endl;
        break;
        case 3:
        cout<<"Tuesday"<<endl;
        break;
        case 4:
        cout<<"Wednesday"<<endl;
        break;
        case 5:
        cout<<"Thursday"<<endl;
        break;
        case 6:
        cout<<"Friday"<<endl;
        break;
        case 7:
        cout<<"Saturday"<<endl;
        break;
        default:
        cout<<"Wrong number!";
    }
}