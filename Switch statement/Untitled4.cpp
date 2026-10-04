#include <iostream>
using namespace std;

int main() {
    char grade;
    cin >> grade;

    switch(grade) {
        case 'A':
            cout << "Excellent";
            break;
        case 'B':
            cout << "Good";
            break;
        case 'C':
            cout << "Average";
            break;
        default:
            cout << "Invalid Grade";
    }
}