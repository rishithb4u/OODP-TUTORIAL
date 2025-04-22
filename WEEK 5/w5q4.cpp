#include <iostream>
using namespace std;

class Car {
    string model;
    float pricePerDay;
    bool available;

public:
    Car() {
        model = "Unknown";
        pricePerDay = 1000;
        available = true;
    }

    Car(string m, float p, bool a) {
        model = m;
        pricePerDay = p;
        available = a;
    }

    Car(const Car &c) {
        model = c.model;
        pricePerDay = c.pricePerDay;
        available = c.available;
    }

    float book(int days) {
        return pricePerDay * days;
    }

    float book(float discountPercent) {
        return pricePerDay * (1 - discountPercent / 100);
    }

    float book(int days, float insurance) {
        return (pricePerDay * days) + insurance;
    }

    float getPrice() const {
        return pricePerDay;
    }

    friend float operator+(Car c1, Car c2) {
        return c1.pricePerDay + c2.pricePerDay;
    }

    bool operator>(Car c) {
        return pricePerDay > c.pricePerDay;
    }

    void show() {
        cout << "Model: " << model << ", Price/Day: " << pricePerDay
             << ", Available: " << (available ? "Yes" : "No") << endl;
    }
};

int main() {
    Car car1("Sedan", 2000, true);
    Car car2("SUV", 3000, true);
    Car car3 = car1;

    car1.show();
    car2.show();
    car3.show();

    cout << "Booking car1 for 5 days: Rs." << car1.book(5) << endl;
    cout << "Booking car2 with 10% discount: Rs." << car2.book(10.0f) << endl;
    cout << "Booking car3 for 3 days with Rs.500 insurance: Rs." << car3.book(3, 500) << endl;

    cout << "Total of car1 + car2 rental price per day: Rs." << (car1 + car2) << endl;

    if (car2 > car1)
        cout << "Car2 is more expensive per day than Car1." << endl;

    return 0;
}




