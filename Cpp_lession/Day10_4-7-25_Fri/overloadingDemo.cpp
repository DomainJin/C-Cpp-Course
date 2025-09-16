#include <iostream>
#include <string.h>
using namespace std;

int addTwo(int a, int b) {
    cout << "Sum: " << a + b << endl;
    return a + b;
}

double addTwo(double a, double b) {
    cout << "Sum: " << a + b << endl;
    return a + b;
}

string addTwo(string a, string b) {
    cout << "String: " << a + b << endl;
    return a + b;
}

int main() {
    addTwo(5, 10);

    addTwo(4.3, 15.9);

    addTwo("Hello, ", "World!");
    
    return 0;
}