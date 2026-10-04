#include <iostream>
using namespace std;

int main() {
    int month;
    cin >> month;

    switch(month) {
        case 1:
            cout << "31 Days";
            break;
        case 2:
            cout << "28 Days";
            break;
        case 3:
            cout << "31 Days";
            break;
        default:
            cout << "Invalid";
    }
}