#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double numA = 45.6789;
    double numB = 0.00034567;
    int numC = 255;
    double numD = 987.654321;
    double numE = -123.456;

    // a. Print 45.6789 in a field of width 10, right-justified, with three decimal places.
    cout << "a. " << setw(10) << fixed << setprecision(3) << numA << endl;

    // b. Display 0.00034567 in scientific notation with six decimal places.
    cout << "b. " << scientific << setprecision(6) << numB << endl;

    // c. Print 255 as a hexadecimal number in uppercase format.
    cout << "c. " << hex << uppercase << numC << endl;

    // Reset format to fixed for d and e
    cout << dec << fixed;

    // d. Print 987.654321 as a fixed-point number rounded to four decimal places.
    cout << "d. " << setprecision(4) << numD << endl;

    // e. Display -123.456 as an exponential and with four decimal spaces.
    cout << "e. " << scientific << setprecision(4) << numE << endl;

    return 0;
}
