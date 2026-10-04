#include <iostream>
using namespace std;

int main() {
    char signal;
    cin >> signal;

    switch(signal) {
        case 'R':
            cout << "Stop";
            break;
        case 'Y':
            cout << "Wait";
            break;
        case 'G':
            cout << "Go";
            break;
        default:
            cout << "Invalid";
    }
}