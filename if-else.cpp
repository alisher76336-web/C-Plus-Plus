Question 1: Even or Odd Number

Write a C++ program to check whether a number is even or odd.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "Even Number";
    } else {
        cout << "Odd Number";
    }
    return 0;
}

Question 2: Positive or Negative Number

Write a program to check whether a number is positive or negative.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num >= 0) {
        cout << "Positive or Zero";
    } else {
        cout << "Negative Number";
    }
    return 0;
}

Question 3: Voting Eligibility

Write a program to check whether a person is eligible to vote. The minimum age is 18.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Eligible to Vote";
    } else {
        cout << "Not Eligible to Vote";
    }
    return 0;
}

Question 4: Pass or Fail

Write a program to check whether a student passes or fails. Passing marks are 50.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 50) {
        cout << "Pass";
    } else {
        cout << "Fail";
    }
    return 0;
}

Question 5: Greater Number

Write a program to find the greater of two numbers.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b) {
        cout << "First number is greater";
    } else {
        cout << "Second number is greater or equal";
    }
    return 0;
}

Question 6: Eligible for Driving License

Write a program to check whether a person is eligible for a driving license based on a minimum age of 18.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Eligible for Driving License";
    } else {
        cout << "Not Eligible";
    }
    return 0;
}

Question 7: Divisible by 5

Write a program to check whether a number is divisible by 5.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 5 == 0) {
        cout << "Divisible by 5";
    } else {
        cout << "Not Divisible by 5";
    }
    return 0;
}

Question 8: Check Password

Write a program to check whether the entered password is correct. The password is 1234.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int password;
    cout << "Enter password: ";
    cin >> password;

    if (password == 1234) {
        cout << "Access Granted";
    } else {
        cout << "Access Denied";
    }
    return 0;
}

Question 9: Check Temperature

Write a program to check whether the temperature is hot or cold. A temperature of 30°C or above is considered hot.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter temperature: ";
    cin >> temp;

    if (temp >= 30) {
        cout << "Hot Weather";
    } else {
        cout << "Cold Weather";
    }
    return 0;
}

Question 10: Check Leap Year

Write a program to check whether a year is a leap year.

Answer:

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0)) {
        cout << "Leap Year";
    } else {
        cout << "Not a Leap Year";
    }
    return 0;
}

Question 11: Check Number Greater Than 100

Write a program to check whether a number is greater than 100.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 100) {
        cout << "Greater than 100";
    } else {
        cout << "100 or Less";
    }
    return 0;
}

Question 12: Check Scholarship Eligibility

Write a program to check whether a student is eligible for a scholarship. Assume 80 or more marks are required.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 80) {
        cout << "Eligible for Scholarship";
    } else {
        cout << "Not Eligible";
    }
    return 0;
}

Question 13: Profit or Loss

Write a program to check whether a shopkeeper makes a profit or loss.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int cost, selling;

    cout << "Enter cost price: ";
    cin >> cost;

    cout << "Enter selling price: ";
    cin >> selling;

    if (selling > cost) {
        cout << "Profit = " << selling - cost;
    } else {
        cout << "Loss or No Profit = "
             << cost - selling;
    }
    return 0;
}

Question 14: Check Vowel or Consonant

Write a program to check whether an English alphabet is a vowel or consonant.

  Answer:

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' ||
        ch == 'i' || ch == 'o' ||
        ch == 'u' || ch == 'A' ||
        ch == 'E' || ch == 'I' ||
        ch == 'O' || ch == 'U') {
        cout << "Vowel";
    } else {
        cout << "Consonant";
    }
    return 0;
}

Question 15: Check Discount

Write a program to calculate a 10% discount if the purchase amount is greater than Rs. 5,000. Otherwise, no discount is given.

  Answer:

#include <iostream>
using namespace std;

int main() {
    double amount, discount;

    cout << "Enter purchase amount: ";
    cin >> amount;

    if (amount > 5000) {
        discount = amount * 0.10;
        cout << "Final Bill = "
             << amount - discount;
    } else {
        cout << "Final Bill = " << amount;
    }
    return 0;
}
