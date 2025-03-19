//___________________________________________________Task1:___________________________________________________________
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number (N): ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << i << " ";
    }

    return 0;
}
//________________________________________________________Task2:___________________________________________________________
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number to display its multiplication table: ";
    cin >> num;

    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
//__________________________________________________________task3:____________________________________________________________
#include <iostream>
using namespace std;
int main() {
    int N, sum = 0;
    cout << "Enter a number (N): ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    cout << "Sum of first " << N << " natural numbers: " << sum << endl;
    return 0;
}
//__________________________________________________________Task4:____________________________________________________________
#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
//_______________________________________________________________Task5:___________________________________________________________
#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
//_______________________________________________________________task6:__________________________________________________________________
#include <iostream>
using namespace std;
int main() {
    int num;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) {
        cout << "Factorial of negative numbers is not defined." << endl;
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << num << " is " << factorial << endl;
    }

    return 0;
}