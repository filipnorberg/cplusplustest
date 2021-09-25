#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;
    cout << "Type your first name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;
}