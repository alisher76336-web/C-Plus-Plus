#include <iostream>
using namespace std;

int main() {
    int age;
    char student;
    cin >> age >> student;

    if (age >= 18) {
        if (student == 'Y')
            cout << "Adult Student";
    }

    return 0;
}