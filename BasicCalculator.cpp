#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Choose operation
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    // Perform calculation
    switch (operation) {
        case '+':
            cout << "Result = " << num1 + num2;
            break;

        case '-':
            cout << "Result = " << num1 - num2;
            break;

        case '*':
            cout << "Result = " << num1 * num2;
            break;

        case '/':
            if (num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Error: Division by zero is not allowed.";
            break;

        default:
            cout << "Invalid operation selected.";
    }

    return 0;
}
