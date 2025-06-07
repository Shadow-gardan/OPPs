#include <iostream>
using namespace std;

class Car {
public:
    Car() {
        cout << "This is the Public attribute use in Incrementation" << endl;
    }
    
private:
    void privateFunction() {
        cout << "This is the Private attribute use in Incrementation. It is private by default." << endl;
    }

protected:
    void protectedFunction() {
        cout << "This is the Protected attribute use in Incrementation." << endl;
    }

public:
    void callPrivate() {
        privateFunction();  // private function can be called inside class
    }

    void callProtected() {
        protectedFunction(); // protected function can be called inside class
    }
};

int main() {
    Car myCar;
    myCar.callPrivate();     // Access private function via public method
    myCar.callProtected();   // Access protected function via public method

    return 0;
}

