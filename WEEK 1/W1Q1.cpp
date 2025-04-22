#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int product = num1 * num2;

    // Counting digits
    int count = 0;
    int temp = product;
    if (temp == 0) {
        count = 1;
    } else {
        while (temp != 0) {
            count++;
            temp /= 10;
        }
    }

    cout << "\nProduct - " << product << endl;
    cout << "Count of digits - " << count << endl;

    return 0;
}
