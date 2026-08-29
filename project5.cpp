#include <iostream>
using namespace std;

int main() {
    string name;
    int age, health, coin;

    cout<<"Enter name: ";
    cin>>name;

    cout<<"Enter age: ";
    cin>>age;

    cout<<"Enter your maximum health: ";
    cin>>health;

    cout<<"Enter your amount of coins: ";
    cin>>coin;


    cout<<endl;
    cout<<"===== CHARACTER CARD ====="<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Health: "<<health<<endl;
    cout<<"Coins: "<<coin<<endl;
    cout<<"Next level coins: 21"<<endl;
    cout<<"========================="<<endl;

    return 0;

}