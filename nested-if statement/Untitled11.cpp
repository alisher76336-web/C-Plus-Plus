#include <iostream>
using namespace std;

int main() {
    int password, pin;
    cin >> password >> pin;

    if (password == 1234) {
        if (pin == 5678)
            cout << "Login Successful";
    }

    return 0;
}