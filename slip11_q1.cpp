#include <iostream>
using namespace std;

// Inline function to perform arithmetic binary operations
inline float performOperation(float a, float b, char op) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            cout << "Invalid operator" << endl;
            return 0.0;
    }
}

int main() {
    float num1, num2;
    char op;

    // Reading two float numbers and an arithmetic binary operator
    cout << "Enter two float numbers: ";
    cin >> num1 >> num2;
    cout << "Enter an arithmetic binary operator (+, -, *, /): ";
    cin >> op;

    // Performing arithmetic binary operation using inline function
    float result = performOperation(num1, num2, op);

    // Displaying the resultant value
    cout << num1 << " " << op << " " << num2 << " = " << result << endl;

    return 0;
}
