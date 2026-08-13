#include <iostream>
using namespace std;

int main() {

    // break example
    cout << "Break: ";

    for (int i = 1; i <= 10; i++) {

        if (i == 6) {
            break;
        }

        cout << i << " ";
    }

    cout << endl;


    // continue example
    cout << "Continue: ";

    for (int i = 1; i <= 10; i++) {

        if (i == 6) {
            continue;
        }

        cout << i << " ";
    }

    cout << endl;

    return 0;
}