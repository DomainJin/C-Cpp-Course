#include <iostream>
using namespace std;

void doWhileDemo() {
    int x = 0;
    do {
        cout << x << "--";
        x++;
    }
    while (x < 10);
    cout << "\n";
}

void forEachDemo() {
    int myArray[] = {1, 2,-2,-7, 3, 4, 5};
    for (int i : myArray) {
        if (i < 0) {
            continue;
        }
        cout << i << "\n";
    }
}

enum Level {
  LOW = 1,
  MEDIUM,
  HIGH
};

int main() {

    doWhileDemo();
    forEachDemo();


    enum Level myVar = HIGH;

    switch (myVar) {
        case 1:
        cout << "Low Level";
        break;
        case 2:
        cout << "Medium level";
        break;
        case 3:
        cout << "High level";
        break;
    }
    return 0;
}
