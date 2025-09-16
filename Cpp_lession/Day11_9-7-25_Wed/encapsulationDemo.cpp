#include <iostream>
using namespace std;

class employee {
    public:
        string name;
        string email;
        int age;
    
    private:
        int salary;
    
    public:
        void setSalary(int s) {
            if (s < 0) {
                salary = 0;
            }
            else salary = s;
        }

        int getSalary() {
            return salary;
        }
}; // end of class employee

int main() {
    employee e1;
    e1.name = "Gau";
    e1.email = "gaudeptrai@gmail.com";
    e1.age = 20;
    e1.setSalary(-1000);
    cout << "Name: " << e1.name << endl;
    cout << "Salary: " << e1.getSalary() << endl;



    return 0;
}