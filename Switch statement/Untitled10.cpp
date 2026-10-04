#include <iostream>
using namespace std;

int main() {
    int choice;
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Add";
            break;
        case 2:
            cout << "Delete";
            break;
        case 3:
            cout << "Exit";
            break;
        default:
            cout << "Invalid";
    }
}