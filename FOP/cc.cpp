#include <iostream>
using namespace std;

int main() {
    int marks;  // Declare an integer variable to store marks

    // Ask the user to enter marks
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    // Grading system using if-else statements
    if (marks >= 90 && marks <= 100) {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 75 && marks < 90) {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 50 && marks < 75) {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 35 && marks < 50) {
        cout << "Grade: D" << endl;
    }
    else if (marks >= 0 && marks < 35) {
        cout << "Grade: F" << endl;  // Fail grade
    }
    else {
        cout << "Invalid marks entered!" << endl;  // If marks are not within 0-100
    }

    return 0;
}
//domain codify
