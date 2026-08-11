#include <iostream>
using namespace std;

int main() {

    // -------------------------
    // 1. FOR LOOP
    // -------------------------

    cout << "For loop: ";                      // you know aproximately how many times of repeat

    for (int i = 1; i <= 5; i++) {             // ++ is for incrementing the value of i by 1 after each iteration of the loop.
        cout << i << " ";                      
    }                                          // -- is for decrementing the value of i by 1 after each iteration of the loop. 

    cout << endl;


    // -------------------------
    // 2. WHILE LOOP                           // you want to repeat while a condition is true
    // -------------------------

    cout << "While loop: ";

    int i = 1;

    while (i <= 5) {
        cout << i << " ";
        i++;
    }

    cout << endl;


    // -------------------------
    // 3. DO-WHILE LOOP                       // the code must execte at least once
    // -------------------------

    cout << "Do-while loop: ";

    int j = 1;

    do {
        cout << j << " ";
        j++;
    } while (j <= 5);

    cout << endl;


    return 0;
} // code output: for loop: 1 2 3 4 5
  // code output: while loop: 1 2 3 4 5
  // code output: do-while loop: 1 2 3 4 5