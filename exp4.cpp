//Shivangi Singh
//24070123148
#include <iostream>
#include <cmath>  // For M_PI

using namespace std;

// Base class
class Shape {
public:
    void displayType() {
        cout << "This is a shape." << endl;
    }
};

// Derived class 1
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() {
        return M_PI * radius * radius;
    }

    void display() {
        cout << "Circle Area: " << area() << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() {
        return length * width;
    }

    void display() {
        cout << "Rectangle Area: " << area() << endl;
    }
};

// Main function
int main() {
    Circle c(5.0);
    Rectangle r(4.0, 6.0);

    cout << "Circle:" << endl;
    c.displayType();  // From base class
    c.display();      // From derived class

    cout << "\nRectangle:" << endl;
    r.displayType();  // From base class
    r.display();      // From derived class

    return 0;
}
