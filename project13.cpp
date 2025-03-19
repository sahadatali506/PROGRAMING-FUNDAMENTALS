////_____________________________________________________task1:_____________________________________________________________
#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr = &num; 
    cout << "Value of num: " << *ptr << endl;
    return 0;
}
////_________________________________________________________task 2:___________________________________________________________
#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr = &num;
    *ptr = 20; 
    cout << "Updated value of num: " << num << endl;
    return 0;
}
//___________________________________________________task3:_____________________________________________________
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << *(ptr + i) << endl;
    }
    return 0;
}
//_____________________________________________________________________task4_____________________________________________________________
#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}
////________________________________________________________________task5:_____________________________________________________
#include <iostream>
using namespace std;
int main() {
    int *ptr = nullptr; 

    if (ptr == nullptr) {
        cout << "Pointer is null, it does not point to any valid memory." << endl;
    } else {
        cout << "Pointer holds address: " << ptr << endl;
    }

    return 0;
}
////////___________________________________________________________task7:__________________________________________________________________ 
#include <iostream>
using namespace std;

int main() {
    int num = 50;
    void *ptr = &num; 

    cout << "Value of num using void pointer: " << *(static_cast<int*>(ptr)) << endl;
    return 0;
}