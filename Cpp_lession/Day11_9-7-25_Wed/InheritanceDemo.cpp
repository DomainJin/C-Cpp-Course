#include <iostream>
using namespace std;

class animal {
    public:
    string type;
    string eyeColor;

};

class human : public animal {
    public:
    string name;
    int age;
};

class employee : public human {
    public:
    string ID;
    string email;
    int salary;
};

int main() {
    employee e1;
    e1.type = "Mammal";
    e1.eyeColor = "Brown";
    e1.name = "Gau";
    e1.age = 20;
    e1.email = "abc";
    

    return 0;
}