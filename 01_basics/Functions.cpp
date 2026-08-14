#include <iostream>
using namespace std;

 // function definition 
 int add(int a, int b) {
    return a + b;
 }

 int main () {
    int result = add(10, 20);
    cout <<"sum: " <<result << endl;
    return 0;
 }