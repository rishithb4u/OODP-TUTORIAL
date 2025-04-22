#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void getData() = 0;
    virtual void printData() = 0;
    virtual float area() = 0;
};

class Rectangle : public Shape {
    float length, width;
public:
    void getData() {
        length = 5;
        width = 3;
    }
    void printData() {
        cout << "Rectangle - Length: " << length << ", Width: " << width << endl;
    }
    float area() {
        return length * width;
    }
};

class Circle : public Shape {
    float radius;
public:
    void getData() {
        radius = 4;
    }
    void printData() {
        cout << "Circle - Radius: " << radius << endl;
    }
    float area() {
        return 3.14f * radius * radius;
    }
};

int main() {
    Rectangle r;
    Circle c;

    r.getData();
    r.printData();
    cout << "Area of Rectangle: " << r.area() << endl;

    c.getData();
    c.printData();
    cout << "Area of Circle: " << c.area() << endl;

    return 0;
}

