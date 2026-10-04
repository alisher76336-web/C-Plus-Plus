#include <iostream>
using namespace std;

int main() {
    int age, marks;
    cin >> age >> marks;

    if (age >= 18) {
        if (marks >= 50)
            cout << "Eligible";
    }

    return 0;
}