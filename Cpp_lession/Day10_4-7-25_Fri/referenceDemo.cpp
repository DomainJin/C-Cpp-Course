#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string food = "pizza";
    string &meal = food; 

    cout << food << "--" << meal << endl;
    
    food = "hot dog";
    cout << food << "--" << meal << endl;

    return 0;
}