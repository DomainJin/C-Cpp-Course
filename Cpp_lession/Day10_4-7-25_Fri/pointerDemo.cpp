#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *p = &x; // Pointer p holds the address of x

    cout << "Value of x: " << x << endl; // Output: 10
    cout << "Address of x: " << &x << endl; // Output: Address of x
    cout << "Value of p (address of x): " << p << endl; // Output: Address of x
    cout << "Value pointed to by p: " << *p << endl; // Output: 10

    *p = 20; // Change the value at the address stored in p

    cout << "New value of x: " << x << endl; // Output: 20
    cout << "Value pointed to by p after change: " << *p << endl; // Output: 20

    return 0;
}