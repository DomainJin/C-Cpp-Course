#include <iostream>
using namespace std;

int devide(int a, int b) {
    if (b == 0) {
        throw (b);  // Throwing an integer exception
    }
    return a / b;
}

int main() {
    int x = 10, y = 0;
    try {
        int result = devide(10, 0);
        cout << "Result: " << result << endl;
    } catch (int so_chia) {
        cout << "Exception caught: " << so_chia << endl;
    }

    return 0;
}
