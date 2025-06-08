#include <iostream>
using namespace std;

class Number {
public:
    void add(int i) {
        if (i == 5) {
            return;
        } else {
            cout << "I = " << i << endl;
            add(i + 1);
        }
    }
};

int main() {
    Number game;
    game.add(0); 
    return 0;
}

