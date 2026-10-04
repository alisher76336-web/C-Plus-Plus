#include <iostream>
using namespace std;

int main() {
    int salary;
    cin >> salary;

    if (salary >= 50000) {
        if (salary < 100000)
            cout << "Medium Salary";
    }

    return 0;
}