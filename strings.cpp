#include <iostream>
#include <string>

using namespace std;

int main() {
    string beginning = "Hello there! ", middle = "My name is ", end = "Filip";
    string full = beginning + middle + end;
    cout << full << "\nThe length of the previous sentence was " << full.length() << " letters including spaces" << "\nThe first letter was " << 
    full[0] << " and the second letter was " << full[1];
}