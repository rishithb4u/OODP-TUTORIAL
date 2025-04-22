#include <iostream>
using namespace std;

const int MAX = 100;

int main() {
    float marks[MAX];
    int n = 0;
    int choice;
    float sum, average, highest, lowest;

    do {
        cout << "\n===== STUDENT MARKS MENU =====" << endl;
        cout << "1. Enter marks of N students" << endl;
        cout << "2. Calculate average marks" << endl;
        cout << "3. Find highest and lowest marks" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter number of students (max " << MAX << "): ";
                cin >> n;
                if (n > MAX || n <= 0) {
                    cout << "Invalid number! Try again." << endl;
                    n = 0;
                    break;
                }
                cout << "Enter marks for " << n << " students:\n";
                for (int i = 0; i < n; i++) {
                    cout << "Student " << (i + 1) << ": ";
                    cin >> marks[i];
                }
                cout << "Marks entered successfully!" << endl;
                break;

            case 2:
                if (n == 0) {
                    cout << "No marks entered yet!" << endl;
                } else {
                    sum = 0;
                    for (int i = 0; i < n; i++) {
                        sum += marks[i];
                    }
                    average = sum / n;
                    cout << "Average marks: " << average << endl;
                }
                break;

            case 3:
                if (n == 0) {
                    cout << "No marks entered yet!" << endl;
                } else {
                    highest = lowest = marks[0];
                    for (int i = 1; i < n; i++) {
                        if (marks[i] > highest)
                            highest = marks[i];
                        if (marks[i] < lowest)
                            lowest = marks[i];
                    }
                    cout << "Highest mark: " << highest << endl;
                    cout << "Lowest mark: " << lowest << endl;
                }
                break;

            case 4:
                cout << "Exiting program" << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
