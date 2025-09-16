#include <iostream>
using namespace std;

class fruit {
    public:
        string name;
        string color;
        double weight;
    private:
        string country = "India";
    protected:
        string shape;
    

    public:
        fruit(string n = "", string c = "", double w = 0) {
            cout << "Constructor called for fruit with parameters" << endl;
            name = n;
            color = c;
            weight = w;
        }

        void cutFruit() {
            cout << "Cutting " << name << endl;
        }
    void printAllData();
}; // End of class fruit

class fruit1: public fruit {
    public:
        string smell;
    public:
        void assignShape(string s) {
            shape = s;
        }
        string getShape() {
            return shape;
        }
    }; // End of class fruit1

void fruit::printAllData() {
    cout << "Data: " << name + " " + color + " " + country + " "<< 
    weight << endl;

}
    

int main() {
    fruit banana("Banana", "Yellow", 0.2);
    // banana.name = "Banana";
    // banana.color = "Yellow";
    // banana.weight = 0.2;
    banana.cutFruit();
    banana.printAllData();

    fruit orange("Orange", "Orange", 0.5);
    // orange.name = "Orange";
    // orange.color = "Orange";
    // orange.weight = 0.5;
    orange.cutFruit();
    orange.printAllData();

    fruit apple;
    apple.name = "Apple";

    fruit1 lemon;
    lemon.name = "Lemon";
    lemon.assignShape("Circular");
    cout << lemon.getShape() << endl;

    

    return 0;
}