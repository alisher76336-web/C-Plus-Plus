#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    if (t >= 35)
        cout << "Hot";
    else if (t >= 20)
        cout << "Normal";
    else
        cout << "Cold";
}