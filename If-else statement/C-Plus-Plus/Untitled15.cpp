#include <iostream>
using namespace std;

int main() {
    int amount;
    cin >> amount;

    if (amount >= 5000)
        cout << "Discount";
    else
        cout << "No Discount";
}