//write include statements

#include <iostream>
#include "repetition.h"

//write using statements

using std::cin;
using std::cout;
using std::endl;

int main() {
    int choice;
    do {
        
        cout << "Menu:\n";
        cout << "1 - Factorial\n";
        cout << "2 - Greatest Common Divisor\n";
        cout << "3 - Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                int num;
                cout << "Enter a number to find its factorial: ";
                cin >> num;
                cout << "Factorial of " << num << " is " << factorial(num) << endl;
                break;
            }
            case 2: {
                int num1, num2;
                cout << "Enter two numbers to find their GCD: ";
                cin >> num1 >> num2;
                cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
                break;
            }
            case 3: {
                char confirm;
                cout << "Are you sure you want to exit? (y/n): ";
                cin >> confirm;
                if (confirm == 'y' || confirm == 'Y') {
                    cout << "Exiting the program." << endl;
                    return 0; 
                }
                break;
            }
            default:
                cout << "Invalid choice. Please enter 1, 2, or 3.\n";
        }
    } while (true); 

    return 0;
}
