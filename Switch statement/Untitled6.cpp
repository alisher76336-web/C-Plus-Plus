#include <iostream>
using namespace std;

int main() {
    int choice;
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Pizza";
            break;
        case 2:
            cout << "Burger";
            break;
        case 3:
            cout << "Fries";
            break;
        default:
            cout << "Invalid";
    }
}