#include <iostream>
using namespace std;

int main() {
    int code;
    cin >> code;

    switch(code) {
        case 1:
            cout << "Jazz";
            break;
        case 2:
            cout << "Ufone";
            break;
        case 3:
            cout << "Zong";
            break;
        default:
            cout << "Invalid";
    }
}