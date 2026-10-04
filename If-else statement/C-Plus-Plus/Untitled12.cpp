#include <iostream>
using namespace std;

int main() {
    int salary;
    cin >> salary;

    if (salary >= 50000)
        cout << "High Salary";
    else
        cout << "Low Salary";
}