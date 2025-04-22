#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Storage {
private:
    T value;
public:
    Storage(T val) : value(val) {}
    void display() {
        cout << "Stored Value: " << value << endl;
    }
};
