#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    void input() {
        char slash;
        cin >> numerator >> slash >> denominator;
    }

    Fraction multiply(Fraction f) {
        Fraction result;
        result.numerator = numerator * f.numerator;
        result.denominator = denominator * f.denominator;
        return result;
    }

    void display() {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f1, f2, product;

    cout << "Enter first fraction: ";
    f1.input();

    cout << "Enter second fraction: ";
    f2.input();

    product = f1.multiply(f2);

    cout << "Product = ";
    product.display();

    return 0;
}
