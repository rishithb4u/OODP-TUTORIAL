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

int main() {
    Storage<int> intStore(100);
    Storage<float> floatStore(99.99f);
    Storage<string> stringStore("Template Demo");

    intStore.display();
    floatStore.display();
    stringStore.display();

    return 0;
}
