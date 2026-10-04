#include <iostream>
using namespace std;

int main() {
    int password;
    cin >> password;

    if (password == 1234)
        cout << "Correct";
    else
        cout << "Wrong";
}