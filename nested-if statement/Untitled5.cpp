#include <iostream>
using namespace std;

int main() {
    int marks, attendance;
    cin >> marks >> attendance;

    if (marks >= 40) {
        if (attendance >= 75)
            cout << "Allowed";
    }

    return 0;
}