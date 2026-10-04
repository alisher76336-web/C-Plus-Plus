#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1)
        cout << "One";
    else if (n == 2)
        cout << "Two";
    else if (n == 3)
        cout << "Three";
    else
        cout << "Other";
}