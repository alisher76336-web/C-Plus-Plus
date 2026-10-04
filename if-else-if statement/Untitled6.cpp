#include <iostream>
using namespace std;

int main() {
    int marks;
    cin >> marks;

    if (marks >= 80)
        cout << "Excellent";
    else if (marks >= 60)
        cout << "Good";
    else if (marks >= 40)
        cout << "Pass";
    else
        cout << "Fail";
}