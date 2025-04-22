#include <iostream>
using namespace std;

inline int add(int a, int b) {
    return a + b;
}

inline int subtract(int a, int b) {
    return a - b;
}

inline int multiply(int a, int b) {
    return a * b;
}

inline float divide(float a, float b) {
    return b != 0 ? a / b : 0;
}

int main() {
    int x = 20, y = 10;
    cout << "Add: " << add(x, y) << endl;
    cout << "Subtract: " << subtract(x, y) << endl;
    cout << "Multiply: " << multiply(x, y) << endl;
    cout << "Divide: " << divide(x, y) << endl;
    return 0;
}
