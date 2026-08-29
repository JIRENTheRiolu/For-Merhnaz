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


    cout<<"===== CHARACTER CARD =====";
    cout<<"Name: "<<name;
    cout<<"Age: "<<age;
    cout<<"Health: "<<health;
    cout<<"Coins: "<<coin;
    cout<<"Next level coins: 21";
    cout<<"=========================";
}