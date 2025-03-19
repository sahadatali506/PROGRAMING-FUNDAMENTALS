//___________________________________________________Task1:__________________________________________________________________________
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    string result = (num % 2 == 0) ? "even" : "odd";
    cout << "The number " << num << " is " << result << "." << endl;

    return 0;
}
//__________________________________________________Task2:___________________________________________________________________________
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    string category = (age < 13) ? "Child" :
                      (age >= 13 && age <= 19) ? "Teenager" :
                      "Adult";

    cout << "Age " << age << " falls under the category: " << category << endl;

    return 0;
}
//____________________________________________________task3:____________________________________________________________________________
#include <iostream>
using namespace std;

int main() {
    double balance;
    bool isLoyal;

    cout << "Enter account balance: $";
    cin >> balance;
    cout << "Are you a loyal customer? (1 for Yes, 0 for No): ";
    cin >> isLoyal;

    // Determine Account Type
    string accountType = (balance < 100) ? "Low Balance Account" :
                         (balance <= 500) ? "Standard Account" :
                         "Premium Account";

    // Check Special Offer Eligibility
    string offer = (balance > 200 && isLoyal) ? "Eligible for special offer" : "Not eligible for special offer";

    cout << "Account Type: " << accountType << endl;
    cout << "Special Offer Status: " << offer << endl;

    return 0;
}

