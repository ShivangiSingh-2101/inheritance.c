//Shvangi singh
//24070123148
#include <iostream>
#include <string>
using namespace std;

//Base Class
class Vehicle{
    public:
    string brand="Volkwagon";
    void colour(){
        cout<<"Black\n";
    }
};

//Derived Class
class Car: public Vehicle{
    public:
    string model="Mustang";
};

int main() {
    Car myCar;
    cout << myCar.brand << "\n";   
    cout << myCar.model << "\n";   
    myCar.colour();                
    return 0;
}
