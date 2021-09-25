#include <iostream>

using namespace std;

int main() {
    int day = 4;
    switch (day) {
        
        case 6: 
          cout << "Saturday";
          break;
        case 7: 
          cout << "Sunday";
          break;
        default:
          cout << "Looking forward to the weekend!";
    }
}