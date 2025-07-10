#include <iostream>
#include <cstring> // Needed for strcpy
using namespace std;

class person {
    char name[23];
    float age;

public:
    person(const char* s, float a) {
        strcpy(name, s);
        age = a;
    }

    person& greater(person& x) {
        return (x.age >= age) ? x : *this;
    }

    void display() {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
    }
};

int main() {
    person p1("John", 34.6);
    person p2("Hohn", 28.9);
    person p3("Gohn", 12.7);

    person p = p1.greater(p3);
    cout << "Elder person is: " << endl;
    p.display();

    p = p1.greater(p2);
    cout << "Elder person is: " << endl;
    p.display();

    return 0;
}

