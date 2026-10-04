#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        if (n > 10)
            cout << "Even and Greater than 10";
    }

    return 0;
}