#include <iostream>
#include <string>
using namespace std;

// First Base Class
class Electronics {
public:
    string brand = "Samsung";
    void model() {
        cout << "Galaxy S21" << endl;
    }
};

// Second Base Class
class Specs {
public:
    string battery = "4000 mAh";
    void colour() {
        cout << "Phantom Black" << endl;
    }
};

// Derived Class
class Smartphone : public Electronics, public Specs {
public:
    string sim = "Dual SIM";
};

int main() {
    Smartphone phone;

    // From Specs
    phone.colour();                   

    // From Electronics
    cout << phone.brand << endl;       
    phone.model();                    

    // From Smartphone + Specs
    cout << "SIM: " << phone.sim << endl;
    cout << "BATTERY: " << phone.battery << endl;

    return 0;
}
