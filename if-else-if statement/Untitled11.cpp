#include <iostream>
using namespace std;

int main() {
    int bmi;
    cin >> bmi;

    if (bmi < 18)
        cout << "Underweight";
    else if (bmi < 25)
        cout << "Normal";
    else
        cout << "Overweight";
}