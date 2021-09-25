#include <iostream>
#include <string>

using namespace std;

int main() {
    int x = 10;
    int y = 18;

    if (x > y) {
        cout << "x is greater than y \n";
    } else {
        cout << "x is not greater than y \n";
    }

    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;
}