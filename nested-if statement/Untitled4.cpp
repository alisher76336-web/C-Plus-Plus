#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 10) {
        if (n % 2 == 0)
            cout << "Greater than 10 and Even";
    }

    return 0;
}