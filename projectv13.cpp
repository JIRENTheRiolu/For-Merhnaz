#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    cout<<"What's your name? ";
    cin>>name;

    cout<<"What's your age? ";
    cin>>age;

    cout<<"Hello "<<name<<"."<<endl;
    cout<<"Next year you will be "<<age+1<<"."<<endl;

    return 0;
}