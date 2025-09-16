#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int* ptr = new int; 
    *ptr = 10;
    cout << "Value pointed to by ptr: " << *ptr << endl; // Output: 10
    delete ptr; // Free the allocated memory
    cout << *ptr << endl; // Output: Address of ptr (may vary)

    return 0;
}