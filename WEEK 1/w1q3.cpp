#include <iostream>
using namespace std;

int main() {
    int num;
    
    while (true) {
        cout << "Enter a number: ";
        cin >> num;
        
        // Calculate and display the cube of the number
        cout << "Cube of " << num << " is: " << num * num * num << endl;

        // Check if the number is divisible by both 2 and 3 (i.e., divisible by 6)
        if (num % 2 == 0 && num % 3 == 0) {
            cout << "EXIT" << endl;
            break;  // Exit the loop if the condition is met
        }
    }

    return 0;
}
