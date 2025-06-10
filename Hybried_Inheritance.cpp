#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal from cat family" << endl;
    }
};

class tiger:public Animal{
public:
    tiger() {
        cout << "tiger came to the cat family" << endl;
    }
};

class Cat:public tiger{
public:
    Cat() {
        cout << "Cat came to the cat family" << endl;
    }
};

class Cheeta : public Cat,public Animal {
public:
    Cheeta() {
        cout << "Cheeta came to the cat family" << endl;
    }
};

void linear_search() {
    Cheeta c;
  
}

int main() {
    linear_search();
    return 0;
}

