#include <iostream>
using namespace std;

int main() {
    string name;
    int age, score;
    bool alive;

    cout<<"Please enter the information of this player."<<endl;

    cout<<"Name: ";
    cin>>name;

    cout<<"Age: ";
    cin>>age;

    cout<<"Initial Score: ";
    cin>>score;

    cout<<"Is the player still alive? ";
    cin>>alive;

    if (alive="yes") {
        bool alive = true;
    }

    else if (alive="no") {
        bool alive = false;
    }

    if (alive=true) {
        cout<<"The player name is "<<name<<", his age is "<<age<<", his initial score is "<<score<<", and he is technically alive."<<endl;
    }

    else {
        cout<<"The player name is "<<name<<", his age is "<<age<<", his initial score is "<<score<<", and he is certainlly dead."<<endl;
    }

    return 0;
}