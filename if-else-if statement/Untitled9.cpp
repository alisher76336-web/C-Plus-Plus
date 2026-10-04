#include <iostream>
using namespace std;

int main() {
    int day;
    cin >> day;

    if (day == 1)
        cout << "Monday";
    else if (day == 2)
        cout << "Tuesday";
    else if (day == 3)
        cout << "Wednesday";
    else
        cout << "Other Day";
}