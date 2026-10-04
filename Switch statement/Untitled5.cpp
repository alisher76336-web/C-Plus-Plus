#include <iostream>
using namespace std;

int main() {
    int month;
    cin >> month;

    switch(month) {
        case 1:
            cout << "January";
            break;
        case 2:
            cout << "February";
            break;
        case 3:
            cout << "March";
            break;
        default:
            cout << "Invalid";
    }
}