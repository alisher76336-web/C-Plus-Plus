#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 100)
        cout << "Large";
    else if (n > 50)
        cout << "Medium";
    else
        cout << "Small";
}