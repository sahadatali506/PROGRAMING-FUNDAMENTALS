//__________________________________________________Task1:_____________________________________________
#include <iostream>
using namespace std;

int main() {
    int N, i = 1;
    cout << "Enter a number (N): ";
    cin >> N;

    while (i <= N) {
        cout << i << " ";
        i++;
    }

    return 0;
}
//_________________________________________________Task2:______________________________________________
#include <iostream>
using namespace std;

int main() {
    int num, i = 1;
    cout << "Enter a number to display its multiplication table: ";
    cin >> num;

    while (i <= 10) {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }

    return 0;
}
//____________________________________________task3:_______________________________________________
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a positive number: ";
    cin >> num;

    while (num <= 0) {
        cout << "Error! Enter a valid positive number: ";
        cin >> num;
    }

    cout << "You entered: " << num << endl;

    return 0;
}
//_________________________________________Task4:______________________________________________
#include <iostream>
using namespace std;

int main() {
    int i = 1, sum = 0;

    while (i <= 5) {
        sum += i;
        i++;
    }

    cout << "Sum of first 5 natural numbers: " << sum << endl;
    return 0;
}
//_________________________________________Task5:__________________________________________________
#include <iostream>
using namespace std;
int main() {
    int choice;
    double balance = 1000, amount;

    while (true) {
        cout << "\nBanking System Menu:\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Deposit successful! New balance: $" << balance << endl;
        } 
        else if (choice == 2) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount > balance) {
                cout << "Insufficient balance!" << endl;
            } else {
                balance -= amount;
                cout << "Withdrawal successful! New balance: $" << balance << endl;
            }
        } 
        else if (choice == 3) {
            cout << "Current balance: $" << balance << endl;
        } 
        else if (choice == 4) {
            cout << "Exiting program. Thank you!" << endl;
            break;
        } 
        else {
            cout << "Invalid choice! Please enter a valid option." << endl;
        }
    }

    return 0;
}
//_____________________________________task5:_________________________________________________
#include <iostream>
using namespace std;
int main() {
    string password, correctPassword = "admin123";

    do {
        cout << "Enter the password: ";
        cin >> password;

        if (password != correctPassword) {
            cout << "Incorrect password. Try again." << endl;
        }

    } while (password != correctPassword);

    cout << "Access granted!" << endl;

    return 0;
}
//__________________________________________task6:_______________________________________________
#include <iostream>
using namespace std;
int main() {
    int choice, quantity;
    double total = 0;
    char continueOrder;

    do {
        cout << "\nRestaurant Menu:\n";
        cout << "1. Chicken Karahi - $12 per kg\n";
        cout << "2. Biryani - $8 per plate\n";
        cout << "3. Pizza - $15 each\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter quantity in kg: ";
                cin >> quantity;
                total += quantity * 12;
                break;
            case 2:
                cout << "Enter number of plates: ";
                cin >> quantity;
                total += quantity * 8;
                break;
            case 3:
                cout << "Enter number of pizzas: ";
                cin >> quantity;
                total += quantity * 15;
                break;
            case 4:
                cout << "Thank you for ordering! Your total bill is: $" << total << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

        cout << "Do you want to order more? (y/n): ";
        cin >> continueOrder;

    } while (continueOrder == 'y' || continueOrder == 'Y');

    cout << "Your final bill is: $" << total << endl;

    return 0;
}








































