#include <iostream>
using namespace std;

class Cat {
public:
    Cat() {
        cout << "Cat came to the cat family" << endl;
    }
};

class Cheeta : public Cat {
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

