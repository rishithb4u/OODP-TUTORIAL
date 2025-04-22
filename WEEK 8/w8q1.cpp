#include <iostream>
using namespace std;

template <typename T>
void display(T value) {
    cout << "Value: " << value << endl;
}

int main() {
    display(42);          
    display(3.14f);        
    display("Hello C++");  
    return 0;
}
