#include <iostream>
using namespace std;
#define safeMoney 11

// define type of date to allow entry date
struct date {
    int day;
    int month;
    int year;
    // define constructor
    date(int d = 1, int m = 1, int y = 2000) {
        day = d;
        month = m;
        year = y;
    }
    // print date
    void printDate() {
        cout << "Date of Birth: " << day << "-" << month << "-" << year << endl;
    }
}; // end of class date

class employee {
    public:
        string name;
        string email;
        date dateOfBirth;
        // define constructor
        employee(string n = "", string e = "", date a = date(1, 1, 2000)) {
            name = n;
            email = e;
            dateOfBirth = a;
        }

        // get age from date of birth
        int age() {
            return 2025 - dateOfBirth.year;
        }
    
    private:
        double salary = 0;

    public:
        void setSalary(double s) {
            if (s < 0) {
                salary = 0;
            }
            else salary = s;
        }

        double getSalary() {
            return salary;
        }

        // calculate tax based on salary
        double getTax() {
            double tax = 0;
            salary < 11 ? tax =0 : 
                salary < 18 ? tax = 10 : 
                    salary < 32 ? tax = 20 : 
                        salary < 52 ? tax = 25 : 
                            salary < 80 ? tax = 30 : tax = 35;
            return tax;
        }

        // calculate net salary
        double netSalary() {
            return salary - (getTax()*safeMoney/100);
        }

}; // end of class employee


int main() {
    employee emp1("Dau","abc@gmail.com",date(04,03,2002));
    cout << "Employee Name: " << emp1.name << endl;
    cout << "Email: " << emp1.email << endl;
    emp1.dateOfBirth.printDate();
    cout << "Age: " << emp1.age() << endl;
    emp1.setSalary(20.6);
    cout << "Salary: " << emp1.getSalary() << endl;
    cout << "Tax: " << emp1.getTax() << "%" << endl;
    cout << "Net Salary: " << emp1.netSalary() << endl;

    return 0;
}