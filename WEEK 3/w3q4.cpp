#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    float price;
    int year;

    // Static data member to count total cars
    static int totalCars;

public:
    // Constructor
    Car(string b, string m, float p, int y) {
        brand = b;
        model = m;
        price = p;
        year = y;
        totalCars++;  // Increment count when a car is created
    }

    // Display function
    void displayCarInfo() const {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Year: " << year << endl;
        cout << "--------------------------" << endl;
    }

    // Static function to get total car count
    static int getTotalCars() {
        return totalCars;
    }
};

// Initialize static data member
int Car::totalCars = 0;

// Demonstration
int main() {
    Car car1("Toyota", "Camry", 24000.0, 2020);
    Car car2("Honda", "Civic", 22000.0, 2021);
    Car car3("Ford", "Mustang", 35000.0, 2022);

    car1.displayCarInfo();
    car2.displayCarInfo();
    car3.displayCarInfo();

    cout << "Total Cars in Inventory: " << Car::getTotalCars() << endl;

    return 0;
}



























