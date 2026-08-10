#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 3;

    // Arithmetic operators
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << endl;

    // Relational operators
    cout << "a == b: " << (a == b) << endl;                 // if both the value is same then it will return true
    cout << "a != b: " << (a != b) << endl;                 // if both the value is not same then it will return true
    cout << "a > b: " << (a > b) << endl;                   // if a is greater than b then it will return true
    cout << "a < b: " << (a < b) << endl;                   // if a is less than b then it will return true
    cout << "a >= b: " << (a >= b) << endl;                 // if a is greater or equal to b
    cout << "a <= b: " << (a <= b) << endl;                 // if a less or equal to b

    // Logical operators
    cout << "a > 5 && b < 5: " << (a > 5 && b < 5) << endl;  // if both the condition is true then it will return true
    cout << "a > 5 || b > 5: " << (a > 5 || b > 5) << endl;  // if either of the condition is true then it will return true
    cout << "!(a > 5): " << !(a > 5) << endl;                

    return 0;
}