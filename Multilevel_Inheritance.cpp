#include <iostream>
using namespace std;

class cat_family {
public:
    cat_family() {
        cout << "There are many cats in this family" << endl;
    }
};

class Tiger {
public:
    Tiger() {
        cout << "Tiger came to the cat family" << endl;
    }
};

class Cheeta : public cat_family,public Tiger {
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

