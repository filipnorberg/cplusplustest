#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i <= 10; i = i + 2) {
        cout << i << "\n";
    }

    cout << "\n";

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << "\n";
    }

    cout << "\n";

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << "\n";
    }
}