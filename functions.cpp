#include <iostream>

using namespace std;


void myFunction() {
    cout << "I just got executed!\n";
}

void myFunction2(string fname, int age) {
    cout << fname << " Refsnes. " << age << " years old. \n";
}

void myFunction3(string country = "Sweden") {
    cout << country << "\n";
}

int myFunction4(int x) {
    return 5 + x;
}

int myFunction5(int z, int y) {
    return z + y;
}


int main() {
    myFunction();
    cout << "\n";

    myFunction2("Liam", 3);
    myFunction2("Jenny", 14);
    myFunction2("Anja", 30);
    cout << "\n";

    myFunction3();
    myFunction3("Norway");
    myFunction3("Finland");
    myFunction3("Denmark");
    cout << "\n";

    cout << myFunction4(3);
    cout << "\n";

    int c = myFunction5(5, 3);
    cout << c;

    return 0;
}