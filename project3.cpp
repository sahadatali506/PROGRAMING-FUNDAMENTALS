//____________________________________________________task 1:__________________________________________________________________
#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Integer Division: " << a / b << endl;
    cout << "Modulus (Remainder): " << a % b << endl;

    return 0;
}
//_______________________________________________________________Task 2:____________________________________________________________
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1 = 3.0, y1 = 4.0, x2 = 7.0, y2 = 1.0;

    double squared_distance = pow(x2 - x1, 2) + pow(y2 - y1, 2);
    
    cout << "Squared Distance: " << squared_distance << endl;

    return 0;
}
//__________________________________________________________________task 3:____________________________________________________________
#include <iostream>
using namespace std;

int main() {
    const double TAX_RATE = 0.06;
    double item1 = 12.95, item2 = 24.95, item3 = 6.95, item4 = 14.95, item5 = 3.95;

    double subtotal = item1 + item2 + item3 + item4 + item5;
    double sales_tax = subtotal * TAX_RATE;
    double total = subtotal + sales_tax;

    cout << "Item Prices:\n";
    cout << "Item 1: $" << item1 << "\nItem 2: $" << item2 << "\nItem 3: $" << item3 
         << "\nItem 4: $" << item4 << "\nItem 5: $" << item5 << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Sales Tax: $" << sales_tax << endl;
    cout << "Total Amount: $" << total << endl;

    return 0;
}
//_______________________________________________________________task 4:___________________________________________________________________
#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;

    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (m): ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "Your BMI: " << bmi << endl;

    return 0;
}
//____________________________________________________________task 5:______________________________________________________________________
#include <iostream>
using namespace std;

int main() {
    double distance, fuelEfficiency, fuelCost, totalCost;

    cout << "Enter trip distance (km): ";
    cin >> distance;
    cout << "Enter fuel efficiency (km/l): ";
    cin >> fuelEfficiency;
    cout << "Enter fuel cost per liter (PKR): ";
    cin >> fuelCost;

    totalCost = (distance / fuelEfficiency) * fuelCost;

    cout << "Total trip cost: " << totalCost << " PKR" << endl;

    return 0;
}