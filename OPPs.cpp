#include <iostream>
#include <string>
using namespace std;

class car_model {
public:
    int num;
    int model_num;
    string Car_name;

    car_model() {
        cout << "Enter the number of cars: ";
        cin >> num;
        cout << "Enter the Model number of the car: ";
        cin >> model_num;
        cout << "Enter the Name of the car: ";
        cin >> Car_name;

        cout << "Number of cars: " << num << endl;
        cout << "Model number: " << model_num << endl;
        cout << "Car name: " << Car_name << endl;
    }
};

int main() {
    car_model car;
    return 0;
}

