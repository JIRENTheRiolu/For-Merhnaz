#include <iostream>
using namespace std;

int main() {
    string name;
    string aliveInput;
    int age, score;
    bool alive;

    cout << "Please enter the information of this player." << endl;

    cout << "Name: ";
    cin >> name;

    cout << "Age: ";
    cin >> age;

    cout << "Initial Score: ";
    cin >> score;

    while (true) {
        cout << "Is the player still alive? ";
        cin >> aliveInput;

        if (aliveInput == "yes") {
            alive = true;
            break;
        }
        else if (aliveInput == "no") {
            alive = false;
            break;
        }
        else {
            cout << "Invalid input. Please enter yes or no." << endl;
        }
    }

    if (alive == true) {
        cout << "The player name is " << name << ", his age is " << age << ", his initial score is " << score << ", and he is technically alive." << endl;
    }
    else {
        cout << "The player name is " << name << ", his age is " << age << ", his initial score is " << score << ", and he is certainly dead." << endl;
    }

    return 0;
}