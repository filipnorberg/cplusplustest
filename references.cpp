#include <iostream>
#include <string>

using namespace std;

int main() {
    string food = "Pizza";
    string &meal = food;
    string* ptr = &food;

    // Outputs value of food (pizza)
    cout << food << "\n";

    // Outputs value of reference var meal (pizza)
    cout << meal << "\n";

    // Outputs memory adress of food
    cout << &food << "\n";

    // Reference: Outputs memory adress of food with the pointer
    cout << ptr << "\n";

    // Dereference: Outputs the value of food with the pointer
    cout << *ptr << "\n";

    // Change value of the pointer
    *ptr = "Hamburger";

    // Outputs the new value of the pointer
    cout << *ptr << "\n";

    // Outputs the new value of the food variable
    cout << food << "\n";
}