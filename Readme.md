Program 1

Aim
To implement the concept of single inheritance in C++ using a base class Vehicle and a derived class Car.


Software Used
Programiz Online Compiler (for C++ execution and testing)

Theory

Inheritance is one of the fundamental features of Object-Oriented Programming (OOP).

* It allows a class (derived class) to acquire the properties and behaviors of another class (base class).
* The base class provides common functionality, while the derived class extends or customizes it.
* In single inheritance, one derived class inherits from only one base class.

In this program:

* The base class Vehicle defines a data member brand and a member function colour().
* The derived class Car inherits from Vehicle and introduces its own data member model.
* Objects of the Car class can access both the base class members (brand, colour()) and its own member (model).

Algorithm

1. Start the program.
2. Define the base class Vehicle with:

   * A data member brand
   * A member function colour()
3. Define the derived class Car which inherits publicly from Vehicle and adds a data member model.
4. In the main() function:

   * Create an object of the derived class Car.
   * Access and display the base class data (brand).
   * Access and display the derived class data (model).
   * Call the inherited function colour().
5. Stop the program.

Conclusion

The program successfully demonstrates single inheritance in C++.
The derived class Car inherited data members and functions from the base class Vehicle while also having its own members. This shows how **code reusability and extension of functionality are achieved through inheritance.


Program 2

Aim
To implement multiple inheritance in C++ using two base classes Electronics and Specs, and a derived class Smartphone.

Software Used
Programiz Online Compiler


Theory
Inheritance is a key concept in Object-Oriented Programming (OOP), allowing a class to acquire properties and behaviors of other classes.

* Multiple inheritance occurs when a derived class inherits from more than one base class.
* It allows the derived class to combine functionalities from different classes, enhancing code reusability and organization.

In this program:

* Electronics is a base class containing brand and model().
* Specs is a base class containing battery and colour().
* Smartphone is a derived class that inherits publicly from both Electronics and Specs, and adds its own member sim.
* The object of Smartphone can access members from both base classes as well as its own members.


Algorithm

1. Start the program.
2. Define the first base class Electronics with:

   * Data member brand
   * Member function model()
3. Define the second base class Specs with:

   * Data member battery
   * Member function colour()
4. Define the derived class Smartphone that inherits publicly from Electronics and Specs.

   * Add a data member sim.
5. In the main() function:

   * Create an object of Smartphone.
   * Call the colour() function from Specs.
   * Access and print brand and call model() from Electronics.
   * Access and print sim and battery from Smartphone and Specs.
6. Stop the program.

Conclusion

The program successfully demonstrates multiple inheritance in C++.
The derived class Smartphone inherited members from both Electronics and Specs, while also containing its own members. This shows how a class can combine properties and methods from multiple sourcess, making the code more modular and reusable.

Program 3

Aim

To implement *multilevel inheritance* in C++ using three classes: Animal, Mammal, and Dog.

Software Used
Programiz Online Compiler

Theory
Inheritance is a key concept in Object-Oriented Programming (OOP), allowing one class to acquire the properties and behaviors of another.

* Multilevel inheritance occurs when a class is derived from another derived class, forming a chain of inheritance.
* In this program:

  * Animal is the base class containing kingdom and the eat() function.
  * Mammal is derived from Animal and adds type and breathe().
  * Dog is derived from Mammal and adds breed and sound().
* The Dog object can access members from all three classes, demonstrating how properties and methods propagate through multiple levels.

Algorithm

1. Start the program.
2. Define the base class Animal with a data member kingdom and a member function eat().
3. Define the derived class Mammal that inherits from Animal. Add type and breathe().
4. Define the derived class Dog that inherits from Mammal. Add breed and sound().
5. In main() function:

   * Create an object of Dog.
   * Access and display kingdom and call eat() from Animal.
   * Access and display type and call breathe() from Mammal.
   * Access and display breed and call sound() from Dog.
6. Stop the program.

Conclusion

The program successfully demonstrates multilevel inheritance in C++.
The derived class Dog inherited properties and behaviors from Mammal and Animal, while also having its own members. This shows how **data and functions can be passed down multiple levels, improving code reusability and organization.

Program 4

Aim
To implement hierarchical inheritance in C++ using a base class Shape and two derived classes Circle and Rectangle.

Software Used
Programiz Online Compiler

Theory

Inheritance is a core concept in Object-Oriented Programming (OOP) that allows one class to acquire the properties and behaviors of another.
* Hierarchical inheritance occurs when multiple derived classes inherit from a single base class.
* In this program:

  * Shape is the base class containing a data member color and a member function displayColor().
  * Circle is a derived class from Shape and has a member function area() for circular area.
  * Rectangle is another derived class from Shape and has a member function area() for rectangular area.
* Objects of the derived classes can access both the base class members and their own members.

Algorithm

1. Start the program.
2. Define the base class Shape with:

   * Data member color
   * Member function displayColor()
3. Define derived class Circle that inherits from Shape and adds an area() function.
4. Define derived class Rectangle that inherits from Shape and adds an area() function.
5. In the main() function:

   * Create objects of Circle and Rectangle.
   * Call displayColor() from the base class for both objects.
   * Call area() from Circle and Rectangle.
6. Stop the program.

Conclusion

The program successfully demonstrates hierarchical inheritance in C++.
Multiple derived classes (Circle and Rectangle) inherited properties 
from a single base class (Shape), while also having their own members.
This shows how **code can be shared efficiently 
among multiple classes, promoting reusability and modular design.
