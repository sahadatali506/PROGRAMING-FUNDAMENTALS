////____________________________________________task1:___________________________________________________________________
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo() {
        cout << "Student Name: " << firstName << " " << lastName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1 = {"Sahadat", "Ali", 2024, 85.5};  
    s1.displayStudentInfo();  
    return 0;
}
////________________________________________________task2:____________________________________________________________________
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo() {
        cout << "Student Name: " << firstName << " " << lastName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];  

    for (int i = 0; i < n; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "First Name: ";
        cin >> students[i].firstName;
        cout << "Last Name: ";
        cin >> students[i].lastName;
        cout << "Roll Number: ";
        cin >> students[i].rollNumber;
        cout << "Marks: ";
        cin >> students[i].marks;
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++) {
        students[i].displayStudentInfo();
        cout << "-----------------------\n";
    }

    return 0;
}
////___________________________________________________________________task3:_____________________________________________
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo() {
        cout << "Student Name: " << firstName << " " << lastName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student* ptr = new Student;  

    cout << "Enter student details:" << endl;
    cout << "First Name: ";
    cin >> ptr->firstName;
    cout << "Last Name: ";
    cin >> ptr->lastName;
    cout << "Roll Number: ";
    cin >> ptr->rollNumber;
    cout << "Marks: ";
    cin >> ptr->marks;

    cout << "\nStudent Details:\n";
    ptr->displayStudentInfo();  
    delete ptr; 
    return 0;
}