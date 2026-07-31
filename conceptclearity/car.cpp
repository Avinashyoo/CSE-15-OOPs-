#include <iostream>
using namespace std;

class Car {      // Class (Blueprint)
public:
    string brand;
    void start() {
        cout << brand << " is starting." << endl;
    }
};

int main() {
    Car car1;    // Object
    Car car2;    // Another Object

    car1.brand = "Toyota";
    car2.brand = "Honda";

    car1.start();
    car2.start();

    return 0;
}