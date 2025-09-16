#include <iostream>
using namespace std;

class Animal {
    public:
        virtual void makeSound(){ //virtual function without content
            cout << "Animal makes sound" << endl;
        }
        virtual void move() = 0;

};

class Dog : public Animal {
    public:
        void makeSound() override {
            cout << "Dog says: Woof" << endl;
        }
        void move() override {
            cout << "Dog runs" << endl;
        }
        
};

class Cat : public Animal {
    public:
        void makeSound() override {
            cout << "Cat says: Meow" << endl;
        }
        void move() override {
            cout << "Cat climbs" << endl;
        }
};

int main() {
    //Đa hình - Polymorphism
    Animal* a1= new Dog(); 
    Animal* a2 = new Cat();
    a1->makeSound(); 
    a2->makeSound();
    a1->move();
    a2->move();
    
    return 0;
}