#include <iostream>
using namespace std;

int main() {
    int amount;
    char member;
    cin >> amount >> member;

    if (amount >= 5000) {
        if (member == 'Y')
            cout << "Discount Available";
    }

    return 0;
}