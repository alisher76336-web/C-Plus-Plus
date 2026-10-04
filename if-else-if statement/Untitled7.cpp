#include <iostream>
using namespace std;

int main() {
    int salary;
    cin >> salary;

    if (salary >= 100000)
        cout << "High";
    else if (salary >= 50000)
        cout << "Medium";
    else
        cout << "Low";
}