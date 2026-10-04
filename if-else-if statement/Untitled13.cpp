#include <iostream>
using namespace std;

int main() {
    int units;
    cin >> units;

    if (units > 300)
        cout << "High Usage";
    else if (units > 100)
        cout << "Medium Usage";
    else
        cout << "Low Usage";
}