#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    switch(n) {
        case 1:
            cout << "Summer";
            break;
        case 2:
            cout << "Winter";
            break;
        case 3:
            cout << "Spring";
            break;
        case 4:
            cout << "Autumn";
            break;
        default:
            cout << "Invalid";
    }
}