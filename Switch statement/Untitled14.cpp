#include <iostream>
using namespace std;

int main() {
    char gender;
    cin >> gender;

    switch(gender) {
        case 'M':
            cout << "Male";
            break;
        case 'F':
            cout << "Female";
            break;
        default:
            cout << "Invalid";
    }
}