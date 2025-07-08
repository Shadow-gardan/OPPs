#include <iostream>
using namespace std;

class alpha {
    int x;
public:
    alpha(int i) {
        x = i;
        cout << "alpha initialized" << endl;
    }

    void showx(void) {
        cout << "x = " << x << endl;
    }
};

class beta {
    float y;
public:
    beta(float j) {
        y = j;
        cout << "beta initialized" << endl;
    }

    void showy(void) {
        cout << "y = " << y << endl;
    }
};

class gamma : public beta, public alpha {
    int m, n;
public:
    gamma(int a, float b, int c, int d) : alpha(a), beta(b) {
        m = c;
        n = d;
        cout << "gamma initialized" << endl;
    }

    void showmn(void) {
        cout << "m = " << m << endl;
        cout << "n = " << n << endl;
    }
};

int main() {
    gamma g(1, 2.5, 3, 4);  
    g.showx();
    g.showy();
    g.showmn();

    return 0;
}

