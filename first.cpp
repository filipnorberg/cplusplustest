#include <iostream>
#include <string>

using namespace std;

//Function that types out text
int main() {
    string myName, myProfession;
    int myAge;

    myAge = 19;
    myName = "Filip Norberg";
    myProfession = "Programming";

    cout << "Hello, my name is " << myName << ". I am " << myAge << " years old and i work with " << myProfession;
    return 0;
}