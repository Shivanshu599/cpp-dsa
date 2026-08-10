#include <iostream>
using namespace std;

int main() {

    string name;
    int age;

    cout << "Enter your name: ";     //cout is used to print the output on the counsole
    cin >> name;                     //cin is used to take input from the user

    cout << "Enter your age: ";     // << is use for cout
    cin >> age;                     // >>is use for cin

    cout << "Hello " << name << "!" << endl;
    cout << "Your age is " << age << endl;

    return 0;
}