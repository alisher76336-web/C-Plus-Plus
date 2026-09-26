1. Check Positive Number

Question: Write a C++ program to check whether a number is positive.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "Positive number";
    }

    return 0;
}

Example output: Input: 10 → Positive number

2. Check Even Number

Question: Write a program to check whether a number is even.

Answer:
  
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "Even number";
    }

    return 0;
}

Example output: Input: 8 → Even number

3. Check Voting Eligibility

Question: Write a program to check whether a person is eligible to vote (age 18 or above).

  Answer:

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Eligible to vote";
    }

    return 0;
}

Example output: Input: 20 → Eligible to vote

4. Check Passing Marks

Question: Write a program to display "Pass" if a student's marks are 50 or above.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 50) {
        cout << "Pass";
    }

    return 0;
}

Example output: Input: 75 → Pass

5. Check Negative Number

Question: Write a program to check whether a number is negative.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Negative number";
    }

    return 0;
}

Example output: Input: -5 → Negative number

6. Check Divisibility by 5

Question: Write a program to check whether a number is divisible by 5.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 5 == 0) {
        cout << "Divisible by 5";
    }

    return 0;
}

Example output: Input: 25 → Divisible by 5

7. Check Greater Number

Question: Write a program to display the greater number if the first number is greater than the second.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b) {
        cout << "First number is greater";
    }

    return 0;
}

Example output: Input: 20 10 → First number is greater

8. Check Zero

Question: Write a program to check whether the entered number is zero.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        cout << "Number is zero";
    }

    return 0;
}

Example output: Input: 0 → Number is zero

9. Check Odd Number

Question: Write a program to check whether a number is odd.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 != 0) {
        cout << "Odd number";
    }

    return 0;
}

Example output: Input: 7 → Odd number

10. Check Temperature

Question: Write a program to display "Hot weather" if the temperature is greater than 35°C.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter temperature: ";
    cin >> temp;

    if (temp > 35) {
        cout << "Hot weather";
    }

    return 0;
}

Example output: Input: 40 → Hot weather

11. Check Scholarship Eligibility

Question: Write a program to display "Eligible for scholarship" if a student's percentage is 80 or above.

  Answer:

#include <iostream>
using namespace std;

int main() {
    float percentage;
    cout << "Enter percentage: ";
    cin >> percentage;

    if (percentage >= 80) {
        cout << "Eligible for scholarship";
    }

    return 0;
}

Example output: Input: 85 → Eligible for scholarship

12. Check Divisibility by Both 3 and 5

Question: Write a program to check whether a number is divisible by both 3 and 5.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 3 == 0 && num % 5 == 0) {
        cout << "Divisible by both 3 and 5";
    }

    return 0;
}

Example output: Input: 15 → Divisible by both 3 and 5

13. Find the Largest of Three Numbers

Question: Write a program to find the largest of three numbers using simple if statements.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << "Largest number: " << a;
    }

    if (b > a && b >= c) {
        cout << "Largest number: " << b;
    }

    if (c > a && c > b) {
        cout << "Largest number: " << c;
    }

    return 0;
}

Example output: Input: 10 30 20 → Largest number: 30

14. Check Leap Year

Question: Write a program to check whether a given year is a leap year using an if statement.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0)
        || year % 400 == 0) {
        cout << "Leap year";
    }

    return 0;
}

Example output: Input: 2024 → Leap year

15. Calculate Discount

Question: Write a program that gives a 10% discount if the shopping amount is greater than Rs. 5000. Display the discount and final amount.

Answer:

#include <iostream>
using namespace std;

int main() {
    float amount, discount, finalAmount;

    cout << "Enter shopping amount: ";
    cin >> amount;

    if (amount > 5000) {
        discount = amount * 0.10;
        finalAmount = amount - discount;

        cout << "Discount: " << discount << endl;
        cout << "Final amount: " << finalAmount;
    }

    return 0;
}
