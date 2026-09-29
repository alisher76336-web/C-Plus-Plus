Question 1: Check Positive, Negative or Zero

Write a C++ program to check whether a number is positive, negative or zero using nested if-else.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num >= 0) {
        if (num == 0) {
            cout << "Zero";
        } else {
            cout << "Positive";
        }
    } else {
        cout << "Negative";
    }

    return 0;
}

Example Output: Enter a number: 5 → Positive
  

Question 2: Check Even or Odd Positive Number

Write a C++ program to check whether a number is positive and then determine whether it is even or odd.

Answer:

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        if (num % 2 == 0) {
            cout << "Positive Even";
        } else {
            cout << "Positive Odd";
        }
    } else {
        cout << "Number is not positive";
    }

    return 0;
}

Example Output: Enter a number: 8 → Positive Even

Question 3: Find the Largest of Three Numbers

Write a C++ program to find the largest number among three numbers using nested if-else.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b) {
        if (a >= c) {
            cout << "Largest: " << a;
        } else {
            cout << "Largest: " << c;
        }
    } else {
        if (b >= c) {
            cout << "Largest: " << b;
        } else {
            cout << "Largest: " << c;
        }
    }

    return 0;
}

Example Output: Enter three numbers: 10 25 15 → Largest: 25

Question 4: Check Voting Eligibility

Write a C++ program to check whether a person is eligible to vote based on age and citizenship.

Answer:

#include <iostream>
using namespace std;

int main() {
    int age;
    char citizen;

    cout << "Enter age: ";
    cin >> age;
    cout << "Pakistani citizen? (Y/N): ";
    cin >> citizen;

    if (age >= 18) {
        if (citizen == 'Y' || citizen == 'y') {
            cout << "Eligible to vote";
        } else {
            cout << "Not a Pakistani citizen";
        }
    } else {
        cout << "Underage";
    }

    return 0;
}

Example Output: Age: 20, Citizen: Y → Eligible to vote

Question 5: Check Student Pass or Fail

Write a C++ program to check whether a student passes both subjects with at least 40 marks in each.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int math, english;
    cout << "Enter Math marks: ";
    cin >> math;
    cout << "Enter English marks: ";
    cin >> english;

    if (math >= 40) {
        if (english >= 40) {
            cout << "Pass";
        } else {
            cout << "Fail in English";
        }
    } else {
        if (english < 40) {
            cout << "Fail in both subjects";
        } else {
            cout << "Fail in Math";
        }
    }

    return 0;
}

Example Output: Math: 70, English: 65 → Pass

Question 6: Check Leap Year

Write a C++ program to determine whether a given year is a leap year using nested if-else.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter year: ";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << "Leap Year";
            } else {
                cout << "Not a Leap Year";
            }
        } else {
            cout << "Leap Year";
        }
    } else {
        cout << "Not a Leap Year";
    }

    return 0;
}

Example Output: Enter year: 2024 → Leap Year

Question 7: Check Grade

Write a C++ program to assign grades based on marks using nested if-else. Grade A: 80–100, B: 70–79, C: 60–69, D: 50–59, otherwise Fail.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 0 && marks <= 100) {
        if (marks >= 80) {
            cout << "Grade A";
        } else {
            if (marks >= 70) {
                cout << "Grade B";
            } else {
                if (marks >= 60) {
                    cout << "Grade C";
                } else {
                    if (marks >= 50) {
                        cout << "Grade D";
                    } else {
                        cout << "Fail";
                    }
                }
            }
        }
    } else {
        cout << "Invalid marks";
    }

    return 0;
}

Example Output: Enter marks: 75 → Grade B

Question 8: Check Login Credentials

Write a C++ program that checks a username first and then a password.

  Answer:

#include <iostream>
using namespace std;

int main() {
    string username, password;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == "admin") {
        if (password == "1234") {
            cout << "Login Successful";
        } else {
            cout << "Incorrect Password";
        }
    } else {
        cout << "Incorrect Username";
    }

    return 0;
}

Example Output: Username: admin, Password: 1234 → Login Successful

Question 9: Check Triangle Validity and Type

Write a C++ program to check whether three sides form a valid triangle. If valid, determine whether it is equilateral, isosceles or scalene.

Answer:

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0 &&
        a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "Equilateral Triangle";
        } else {
            if (a == b || b == c || a == c) {
                cout << "Isosceles Triangle";
            } else {
                cout << "Scalene Triangle";
            }
        }
    } else {
        cout << "Invalid Triangle";
    }

    return 0;
}

Example Output: Enter three sides: 5 5 8 → Isosceles Triangle

Question 10: ATM Withdrawal

Write a C++ program to check whether the entered PIN is correct and whether the account has sufficient balance for withdrawal.

Answer:

#include <iostream>
using namespace std;

int main() {
    int pin, amount;
    int balance = 10000;

    cout << "Enter PIN: ";
    cin >> pin;

    if (pin == 1234) {
        cout << "Enter withdrawal amount: ";
        cin >> amount;

        if (amount > 0 && amount <= balance) {
            balance = balance - amount;
            cout << "Withdrawal Successful\n";
            cout << "Remaining Balance: " << balance;
        } else {
            cout << "Invalid amount or insufficient balance";
        }
    } else {
        cout << "Incorrect PIN";
    }

    return 0;
}

Example Output: PIN: 1234, Amount: 3000 → Remaining Balance: 7000

Question 11: Check Admission Eligibility

Write a C++ program to check university admission eligibility. A student must have at least 50% marks and at least 50 marks in the entry test.

Answer:

#include <iostream>
using namespace std;

int main() {
    int marks, test;

    cout << "Enter percentage: ";
    cin >> marks;
    cout << "Enter entry test marks: ";
    cin >> test;

    if (marks >= 50) {
        if (test >= 50) {
            cout << "Eligible for Admission";
        } else {
            cout << "Entry Test Not Cleared";
        }
    } else {
        cout << "Insufficient Percentage";
    }

    return 0;
}

Example Output: Percentage: 65, Test: 70 → Eligible for Admission

Question 12: Calculate Shopping Discount

Write a C++ program to calculate a discount. If the shopping amount is at least Rs. 5,000, give a 10% discount; if it is at least Rs. 10,000, give a 20% discount.

  Answer:

#include <iostream>
using namespace std;

int main() {
    float amount, discount;

    cout << "Enter shopping amount: ";
    cin >> amount;

    if (amount >= 5000) {
        if (amount >= 10000) {
            discount = amount * 0.20;
        } else {
            discount = amount * 0.10;
        }
    } else {
        discount = 0;
    }

    cout << "Discount: " << discount << endl;
    cout << "Final Bill: " << amount - discount;

    return 0;
}

Example Output: Amount: 12000 → Discount: 2400, Final Bill: 9600

Question 13: Check Age Category

Write a C++ program to determine whether a person is a child, teenager, adult or senior citizen.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age >= 0) {
        if (age < 13) {
            cout << "Child";
        } else {
            if (age < 20) {
                cout << "Teenager";
            } else {
                if (age < 60) {
                    cout << "Adult";
                } else {
                    cout << "Senior Citizen";
                }
            }
        }
    } else {
        cout << "Invalid Age";
    }

    return 0;
}

Example Output: Enter age: 19 → Teenager

Question 14: Check Number Divisibility

Write a C++ program to check whether a number is divisible by both 5 and 10, only by 5, or neither.

  Answer:

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 5 == 0) {
        if (num % 10 == 0) {
            cout << "Divisible by both 5 and 10";
        } else {
            cout << "Divisible by 5 only";
        }
    } else {
        cout << "Not divisible by 5 or 10";
    }

    return 0;
}

Example Output: Enter a number: 25 → Divisible by 5 only

Question 15: Employee Bonus Calculation

Write a C++ program to calculate an employee's bonus. If an employee has more than 5 years of service, give a 10% bonus for a salary of at least Rs. 50,000 and a 5% bonus otherwise. Employees with 5 or fewer years of service receive no bonus.

  Answer:

#include <iostream>
using namespace std;

int main() {
    float salary, bonus;
    int years;

    cout << "Enter salary: ";
    cin >> salary;
    cout << "Enter years of service: ";
    cin >> years;

    if (years > 5) {
        if (salary >= 50000) {
            bonus = salary * 0.10;
        } else {
            bonus = salary * 0.05;
        }
    } else {
        bonus = 0;
    }

    cout << "Bonus: " << bonus << endl;
    cout << "Total Salary: " << salary + bonus;

    return 0;
}
