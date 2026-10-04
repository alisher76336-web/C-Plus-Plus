#include <iostream>
using namespace std;

int main() {
    int age;
    char cnic;
    cin >> age >> cnic;

    if (age >= 18) {
        if (cnic == 'Y')
            cout << "Eligible";
    }

    return 0;
}