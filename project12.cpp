//_______________________________________________task1:__________________________________________________________________________
#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Square Root: " << sqrt(num) << endl;
    cout << "Absolute Value: " << abs(num) << endl;
    cout << "Sin: " << sin(num) << endl;
    cout << "Cos: " << cos(num) << endl;
    cout << "Power (Number^3): " << pow(num, 3) << endl;
    return 0;
}
//______________________________________________task2:_________________________________________________________________________________
#include <iostream>
using namespace std;
void greet() {
    cout << "Hello, Welcome to C++ Functions!" << endl;
}

int main() {
    greet(); 
    return 0;
}
////______________________________________________task3:_____________________________________________________________________________________
#include <iostream>
using namespace std;
void checkEvenOdd(int num) {
    if (num % 2 == 0)
        cout << num << " is Even" << endl;
    else
        cout << num << " is Odd" << endl;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    checkEvenOdd(num);
    return 0;
}
//_______________________________________________task4:_________________________________________________________________________________________
#include <iostream>
using namespace std;
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
////_______________________________________________task5:______________________________________________________________________________________
#include <iostream>
using namespace std;
void menu() {
    cout << "\nCalculator Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;
}
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return (b != 0) ? (a / b) : 0; }
int main() {
    int choice;
    double num1, num2;
    do {
        menu();
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }
        switch (choice) {
            case 1: cout << "Result: " << add(num1, num2) << endl; break;
            case 2: cout << "Result: " << subtract(num1, num2) << endl; break;
            case 3: cout << "Result: " << multiply(num1, num2) << endl; break;
            case 4: cout << "Result: " << divide(num1, num2) << endl; break;
            case 5: cout << "Exiting program..." << endl; break;
            default: cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 5);
    return 0;
}
//___________________________________________________________task6:______________________________________________________________
#include <iostream>
using namespace std;
void displayMenu() {
    cout << "\nRestaurant Menu:\n";
    cout << "1. Burger - $5\n";
    cout << "2. Pizza - $8\n";
    cout << "3. Pasta - $6\n";
    cout << "4. Fries - $3\n";
    cout << "5. Juice - $2\n";
    cout << "6. Exit\n";
}

double calculateTotal(int choice, int quantity) {
    double prices[] = {5, 8, 6, 3, 2};
    return prices[choice - 1] * quantity;
}

double applyTax(double total) {
    return total + (total * 0.10);
}

int main() {
    int choice, quantity;
    double totalBill = 0;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Enter quantity: ";
            cin >> quantity;
            totalBill += calculateTotal(choice, quantity);
        } else if (choice != 6) {
            cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 6);

    totalBill = applyTax(totalBill);
    cout << "Final Bill (Including Tax): $" << totalBill << endl;

    return 0;
}
