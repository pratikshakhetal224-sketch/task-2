#include <iostream>
using namespace std;

int main() {
    float a, b;
    int choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: cout << "Result = " << a + b; break;
        case 2: cout << "Result = " << a - b; break;
        case 3: cout << "Result = " << a * b; break;
        case 4:
            if(b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Division by zero not allowed";
            break;
        default: cout << "Invalid choice";
    }

    return 0;
}