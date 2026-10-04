#include <iostream>
using namespace std;

int main() {
    int speed;
    cin >> speed;

    if (speed > 100)
        cout << "Fast";
    else if (speed >= 60)
        cout << "Normal";
    else
        cout << "Slow";
}