#include <iostream>
#include <iomanip>

using namespace std;

// Function declarations
void showMenu();
void calculate();

int main() {
    calculate();
    return 0;
}

void showMenu() {
    cout << "==============================" << endl;
    cout << "    SCIENTIFIC CALCULATOR     " << endl;
    cout << "==============================" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter your choice: ";
}

void calculate() {
    int choice;
    double num1, num2;

    while (true) {
        showMenu();
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            switch (choice) {
                case 1:
                    cout << "Result: " << num1 + num2 << endl;
                    break;
                case 2:
                    cout << "Result: " << num1 - num2 << endl;
                    break;
                case 3:
                    cout << "Result: " << num1 * num2 << endl;
                    break;
                case 4:
                    if (num2 != 0)
                        cout << "Result: " << num1 / num2 << endl;
                    else
                        cout << "Error: Division by zero is not allowed!" << endl;
                    break;
            }
        } else {
            cout << "Invalid choice! Please try again." << endl;
        }
        cout << endl;
    }
}
