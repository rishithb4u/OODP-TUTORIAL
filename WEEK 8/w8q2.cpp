#include <iostream>
using namespace std;

template <typename T>
void findMax(T a, T b) {
    cout << "Max: " << (a > b ? a : b) << endl;
}

int main() {
    findMax(10, 20);             
    findMax(5.6f, 3.2f);         
    findMax(8.12345, 9.54321);  
    return 0;
}
