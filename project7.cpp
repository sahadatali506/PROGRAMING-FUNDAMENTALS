////___________________________________________task1:______________________________________________
//#include <iostream>
//using namespace std;
//
//int main() {
//    int num;
//    cout << "Enter an integer: ";
//    cin >> num;
//
//    if (num > 0)
//        cout << "The number is positive.\n";
//    else if (num < 0)
//        cout << "The number is negative.\n";
//    else
//        cout << "The number is zero.\n";
//
//    return 0;
//}
////__________________________________________task2:___________________________________________________
//#include <iostream>
//using namespace std;
//
//int main() {
//    int temp;
//    cout << "Enter the temperature (°C): ";
//    cin >> temp;
//
//    if (temp >= 40)
//        cout << "Stay indoors! It's extremely hot.\n";
//    else if (temp >= 30)
//        cout << "Drink plenty of water to stay hydrated.\n";
//    else if (temp >= 20)
//        cout << "The weather is pleasant for outdoor activities.\n";
//    else
//        cout << "Wear warm clothes to stay comfortable.\n";
//
//    return 0;
//}
////___________________________________________task3:______________________________________________________
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string username, password;
//    cout << "Enter username: ";
//    cin >> username;
//    cout << "Enter password: ";
//    cin >> password;
//
//    if (username == "admin" && password == "12345")
//        cout << "Access Granted.\n";
//    else if (username == "admin")
//        cout << "Wrong Password.\n";
//    else
//        cout << "User Not Found.\n";
//
//    return 0;
//}
////___________________________________________task4:____________________________________________________________
//#include <iostream>
//using namespace std;
//
//int main() {
//    float subject1, subject2, subject3, total, percentage;
//    char grade1, grade2, grade3;
//    
//    cout << "Enter marks for 3 subjects: ";
//    cin >> subject1 >> subject2 >> subject3;
//
//    total = subject1 + subject2 + subject3;
//    percentage = (total / 300) * 100;
//
//    // Grade Calculation
//    auto calculateGrade = [](float marks) {
//        if (marks >= 90) return 'A';
//        else if (marks >= 80) return 'B';
//        else if (marks >= 70) return 'C';
//        else if (marks >= 60) return 'D';
//        else return 'F';
//    };
//
//    grade1 = calculateGrade(subject1);
//    grade2 = calculateGrade(subject2);
//    grade3 = calculateGrade(subject3);
//
//    cout << "\nTotal Marks: " << total;
//    cout << "\nPercentage: " << percentage << "%";
//    cout << "\nGrades: " << grade1 << " " << grade2 << " " << grade3 << endl;
//
//    // Failure Condition
//    if (grade1 == 'F' || grade2 == 'F' || grade3 == 'F') {
//        cout << "Failed.\n";
//        return 0;
//    }
//
//    // Scholarship Eligibility
//    if (grade1 == 'A' && grade2 == 'A' && grade3 == 'A' && total >= 270)
//        cout << "Eligible for Merit Scholarship.\n";
//    else if (grade1 >= 'B' && grade2 >= 'B' && grade3 >= 'B' && total >= 240)
//        cout << "Eligible for Regular Scholarship.\n";
//    else
//        cout << "Not eligible for any scholarship.\n";
//
//    return 0;
//}
////__________________________________________task5:__________________________________________________________
//#include <iostream>
//using namespace std;
//
//int main() {
//    int age;
//    double income;
//    
//    cout << "Enter your age: ";
//    cin >> age;
//    cout << "Enter your annual income ($): ";
//    cin >> income;
//
//    if (age >= 18) {
//        if (income >= 30000)
//            cout << "Congratulations! You are eligible for a loan.\n";
//        else
//            cout << "You meet the age requirement but are not eligible due to low income.\n";
//    } else {
//        cout << "You are not eligible for a loan because you are under 18.\n";
//    }
//
//    return 0;
//}
////__________________________________________task6:______________________________________________________________
#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password, role;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == "admin" && password == "password123") {
        cout << "Authentication Successful!\n";

        cout << "Enter role (Admin/Guest/User/Manager): ";
        cin >> role;

        if (role == "Admin")
            cout << "Full Access\n";
        else if (role == "Guest")
            cout << "Limited Access\n";
        else
            cout << "No Access\n";
    } else {
        cout << "Authentication Failed. Access Denied.\n";
    }

    return 0;
}
