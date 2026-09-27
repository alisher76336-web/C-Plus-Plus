Question 1: Day of the Week

Write a C++ program that takes a number from 1 to 7 and displays the corresponding day of the week.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day number: ";
    cin >> day;

    switch (day) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday"; break;
        default: cout << "Invalid day";
    }

    return 0;
}

Example output:

Enter day number: 3
Wednesday
  
Question 2: Simple Calculator

Write a C++ program that performs addition, subtraction, multiplication or division using a switch statement.

  Answer:

#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Result = " << a + b;
            break;
        case '-':
            cout << "Result = " << a - b;
            break;
        case '*':
            cout << "Result = " << a * b;
            break;
        case '/':
            if (b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Cannot divide by zero";
            break;
        default:
            cout << "Invalid operator";
    }

    return 0;
}

Example output:

Enter two numbers: 10 5
Enter operator (+, -, *, /): *
Result = 50
  
Question 3: Month Name

Write a C++ program that takes a number from 1 to 12 and displays the corresponding month.

Answer:

#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number: ";
    cin >> month;

    switch (month) {
        case 1: cout << "January"; break;
        case 2: cout << "February"; break;
        case 3: cout << "March"; break;
        case 4: cout << "April"; break;
        case 5: cout << "May"; break;
        case 6: cout << "June"; break;
        case 7: cout << "July"; break;
        case 8: cout << "August"; break;
        case 9: cout << "September"; break;
        case 10: cout << "October"; break;
        case 11: cout << "November"; break;
        case 12: cout << "December"; break;
        default: cout << "Invalid month";
    }

    return 0;
}

Example output:

Enter month number: 8
August
  
Question 4: Vowel or Consonant

Write a C++ program that checks whether an entered alphabet is a vowel or consonant using switch.

  Answer:

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "Vowel";
            break;
        default:
            if ((ch >= 'a' && ch <= 'z') ||
                (ch >= 'A' && ch <= 'Z'))
                cout << "Consonant";
            else
                cout << "Invalid alphabet";
    }

    return 0;
}

Example output:

Enter an alphabet: e
Vowel

Question 5: Even or Odd

Write a C++ program that checks whether a number is even or odd using a switch statement.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    switch (num % 2) {
        case 0:
            cout << "Even number";
            break;
        default:
            cout << "Odd number";
    }

    return 0;
}

Example output:

Enter a number: 15
Odd number

Question 6: Grade System

Write a C++ program that displays a grade description according to the grade entered by the user.

  Answer:

#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter grade (A, B, C, D, F): ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Excellent";
            break;
        case 'B':
            cout << "Very Good";
            break;
        case 'C':
            cout << "Good";
            break;
        case 'D':
            cout << "Pass";
            break;
        case 'F':
            cout << "Fail";
            break;
        default:
            cout << "Invalid grade";
    }

    return 0;
}

Example output:

Enter grade (A, B, C, D, F): B
Very Good

Question 7: Traffic Light

Write a C++ program that displays the appropriate action for red, yellow and green traffic lights.

  Answer:

#include <iostream>
using namespace std;

int main() {
    char light;
    cout << "Enter R, Y or G: ";
    cin >> light;

    switch (light) {
        case 'R':
        case 'r':
            cout << "Stop";
            break;
        case 'Y':
        case 'y':
            cout << "Get Ready";
            break;
        case 'G':
        case 'g':
            cout << "Go";
            break;
        default:
            cout << "Invalid color";
    }

    return 0;
}

Example output:

Enter R, Y or G: R
Stop

Question 8: Number of Days in a Month

Write a C++ program that displays the number of days in a month using a switch statement. Assume February has 28 days.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number: ";
    cin >> month;

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31 days";
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30 days";
            break;

        case 2:
            cout << "28 days";
            break;

        default:
            cout << "Invalid month";
    }

    return 0;
}

Example output:

Enter month number: 4
30 days
  
Question 9: Food Menu

Write a C++ program that displays the price of a food item selected from a menu.

Answer:

#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "1. Burger\n";
    cout << "2. Pizza\n";
    cout << "3. Sandwich\n";
    cout << "4. Fries\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Burger = Rs. 300";
            break;
        case 2:
            cout << "Pizza = Rs. 800";
            break;
        case 3:
            cout << "Sandwich = Rs. 250";
            break;
        case 4:
            cout << "Fries = Rs. 150";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}

Example output:

1. Burger
2. Pizza
3. Sandwich
4. Fries
Enter your choice: 2
Pizza = Rs. 800
  
Question 10: Positive, Negative or Zero

Write a C++ program that checks whether an entered number is positive, negative or zero using switch.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    switch ((num > 0) - (num < 0)) {
        case 1:
            cout << "Positive";
            break;
        case -1:
            cout << "Negative";
            break;
        case 0:
            cout << "Zero";
            break;
    }

    return 0;
}

Example output:

Enter a number: -7
Negative
  
Question 11: Area Calculator

Write a C++ program that calculates the area of a square, rectangle or circle using switch.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b;

    cout << "1. Square\n";
    cout << "2. Rectangle\n";
    cout << "3. Circle\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter side: ";
            cin >> a;
            cout << "Area = " << a * a;
            break;

        case 2:
            cout << "Enter length and width: ";
            cin >> a >> b;
            cout << "Area = " << a * b;
            break;

        case 3:
            cout << "Enter radius: ";
            cin >> a;
            cout << "Area = " << 3.14159 * a * a;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}

Example output:

1. Square
2. Rectangle
3. Circle
Enter choice: 1
Enter side: 5
Area = 25
  
Question 12: ATM Menu

Write a C++ program that displays an ATM menu and performs balance inquiry, withdrawal or deposit.

Answer:

#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 10000, amount;

    cout << "1. Check Balance\n";
    cout << "2. Withdraw\n";
    cout << "3. Deposit\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Balance = " << balance;
            break;

        case 2:
            cout << "Enter amount: ";
            cin >> amount;
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Remaining = " << balance;
            } else {
                cout << "Invalid amount or insufficient balance";
            }
            break;

        case 3:
            cout << "Enter amount: ";
            cin >> amount;
            if (amount > 0) {
                balance += amount;
                cout << "New balance = " << balance;
            } else {
                cout << "Invalid amount";
            }
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}

Example output:

1. Check Balance
2. Withdraw
3. Deposit
Enter choice: 2
Enter amount: 2000
Remaining = 8000
  
Question 13: Temperature Conversion

Write a C++ program that converts Celsius into Fahrenheit or Fahrenheit into Celsius.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int choice;
    double temp;

    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter Celsius: ";
            cin >> temp;
            cout << "Fahrenheit = "
                 << (temp * 9 / 5) + 32;
            break;

        case 2:
            cout << "Enter Fahrenheit: ";
            cin >> temp;
            cout << "Celsius = "
                 << (temp - 32) * 5 / 9;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}

Example output:

1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
Enter choice: 1
Enter Celsius: 25
Fahrenheit = 77
  
Question 14: Find the Larger Number

Write a C++ program that compares two numbers using a switch statement and displays the larger number or indicates if they are equal.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch ((a > b) - (a < b)) {
        case 1:
            cout << a << " is larger";
            break;
        case -1:
            cout << b << " is larger";
            break;
        case 0:
            cout << "Both are equal";
            break;
    }

    return 0;
}

Example output:

Enter two numbers: 20 35
35 is larger

Question 15: Student Subject Menu

Write a C++ program that displays the subject name according to the number entered by the student.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "1. Programming Fundamentals\n";
    cout << "2. Calculus\n";
    cout << "3. Applied Physics\n";
    cout << "4. English\n";
    cout << "5. ICT\n";

    cout << "Enter subject number: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Programming Fundamentals";
            break;
        case 2:
            cout << "Calculus";
            break;
        case 3:
            cout << "Applied Physics";
            break;
        case 4:
            cout << "English";
            break;
        case 5:
            cout << "ICT";
            break;
        default:
            cout << "Invalid subject number";
    }

    return 0;
}
