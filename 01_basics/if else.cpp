#include <iostream>
using namespace std;

int main() {

    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {                                      //if (condition){
                                                          //code to be executed if the condition is true }             
        cout << "You are an adult." << endl;              //else{ run the code if the condition if false }
    }
    else {
        cout << "You are a minor." << endl;
    }

    return 0;
}