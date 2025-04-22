#include <iostream>
using namespace std;

class Example {
    int x;
public:
    Example(int a) { x = a; }
    void show() { cout << "Value: " << x << endl; }
};

int main() {
    // Example obj; // Error: no matching default constructor
    Example obj(10); // Correct way
    obj.show();
    return 0;
}
