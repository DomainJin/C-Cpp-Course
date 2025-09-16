#include <iostream>
#include <string.h>
#include <functional>
using namespace std;

void printMessageManyTimes(function<void()> printMsg, int n) {
    for (int i = 0; i < n; ++i) {
        printMsg();
    }
    
}

int main() {
    auto f = []() {
        cout << "Hello, World!" << endl;
    };
    printMessageManyTimes(f, 10);
    return 0;
}