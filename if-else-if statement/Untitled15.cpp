#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age < 5)
        cout << "Free";
    else if (age < 18)
        cout << "Half Ticket";
    else
        cout << "Full Ticket";
}