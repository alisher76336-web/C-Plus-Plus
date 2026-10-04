#include <iostream>
using namespace std;

int main() {
    int amount;
    cin >> amount;

    if (amount >= 10000)
        cout << "20% Discount";
    else if (amount >= 5000)
        cout << "10% Discount";
    else
        cout << "No Discount";
}