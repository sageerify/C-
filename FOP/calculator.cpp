/*Simple Calculator Using if-else
Objective: Create a simple calculator that can add, subtract, multiply, or divide two numbers based on user input.
Instructions:
Prompt the user to enter two numbers and an operator (+, -, *, /).
Use if-else statements to perform the operation based on the operator.
Print the result.
*/

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    
    cout << "Enter two numbers and an operator (+, -, *, /): ";
    cin >> num1 >> num2 >> op;

    if (op == '+') cout << "Result: " << num1 + num2 << endl;
    else if (op == '-') cout << "Result: " << num1 - num2 << endl;
    else if (op == '*') cout << "Result: " << num1 * num2 << endl;
    else if (op == '/') cout << "Result: " << num1 / num2 << endl;
    else cout << "Invalid operator!" << endl;

    return 0;
}
