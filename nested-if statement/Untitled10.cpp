#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 0) {
        if (n % 5 == 0)
            cout << "Positive and Divisible by 5";
    }

    return 0;
}