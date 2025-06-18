#include<iostream>
using namespace std;

class B; 

class A {
private:
    int secret;

public:
    A() : secret(42) {}

    friend class B;  
};

class B {
public:
    void revealSecret(A a) {
        cout << "Secret is: " << a.secret << endl;
    }
};

int main(){
	A objA;
	B objB;
	objB.revealSecret(objA);
	return 0;
	
}
