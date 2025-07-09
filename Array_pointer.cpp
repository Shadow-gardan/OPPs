#include <iostream>
#include <string>

using namespace std;

int main() {
    string activities[] = {
        "book",
        "TV",
        "computer",
        "sport",
        "game"
    };

    string input;
    cout << "Enter your favorite leisure pursuit: ";
    cin >> input;

    bool found = false;
    for (int i = 0; i < 5; ++i) {
        if (input == activities[i]) {
            cout << "Your favorite pursuit is available here." << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Your favorite pursuit is not available." << endl;
    }

    return 0;
}

