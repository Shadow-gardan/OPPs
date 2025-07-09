#include <iostream>
#include <cstring> // for strlen

using namespace std;

int main() {
    char str[] = "test";
    int len = strlen(str);

    cout << "Character access demonstration:\n";
    for (int i = 0; i < len; i++) {
        cout << "str[" << i << "]=" << str[i] << ", ";
        cout << "i[str]=" << i[str] << ", ";
        cout << "*(str + i)=" << *(str + i) << ", ";
        cout << "*(i + str)=" << *(i + str) << endl;
    }

    // Reverse the string
    int lenm = len / 2;
    len--; // index of last character
    for (int i = 0; i < lenm; i++) {
        // Swap str[i] and str[len - i]
        char temp = str[i];
        str[i] = str[len - i];
        str[len - i] = temp;
    }

    cout << "The string reversed: " << str << endl;

    return 0;
}

