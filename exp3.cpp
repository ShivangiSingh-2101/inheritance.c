//Shivangi Singh
//2407023148
#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
public:
    string kingdom = "Animalia";
    void eat() {
        cout << "Eats food" << endl;
    }
};

// Derived class 1
class Mammal : public Animal {
public:
    string type = "Warm-blooded";
    void breathe() {
        cout << "Breathes air" << endl;
    }
};

// Derived class 2 (inherits from Mammal)
class Dog : public Mammal {
public:
    string breed = "Labrador";
    void sound() {
        cout << "Barks" << endl;
    }
};

int main() {
    Dog myDog;

    // From Animal
    cout << myDog.kingdom << endl;
    myDog.eat();

    // From Mammal
    cout << myDog.type << endl;
    myDog.breathe();

    // From Dog
    cout << myDog.breed << endl;
    myDog.sound();

    return 0;
}
