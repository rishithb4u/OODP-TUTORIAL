#include <iostream>
using namespace std;

const int SIZE = 100;

int main() {
    int arr[SIZE];
    int n = 0; // Current number of elements
    int choice, value, i, pos;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Insert an element" << endl;
        cout << "2. Delete an element" << endl;
        cout << "3. Search for an element" << endl;
        cout << "4. Display all elements" << endl;
        cout << "5. Sort the array" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: // Insert
                if (n < SIZE) {
                    cout << "Enter value to insert: ";
                    cin >> value;
                    arr[n++] = value;
                    cout << "Inserted successfully!" << endl;
                } else {
                    cout << "Array is full!" << endl;
                }
                break;

            case 2: // Delete
                cout << "Enter value to delete: ";
                cin >> value;
                pos = -1;
                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        pos = i;
                        break;
                    }
                }
                if (pos != -1) {
                    for (i = pos; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    cout << "Deleted successfully!" << endl;
                } else {
                    cout << "Value not found!" << endl;
                }
                break;

            case 3: // Search
                cout << "Enter value to search: ";
                cin >> value;
                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        cout << "Value found at position " << i << endl;
                        break;
                    }
                }
                if (i == n) {
                    cout << "Value not found!" << endl;
                }
                break;

            case 4: // Display
                if (n == 0) {
                    cout << "Array is empty!" << endl;
                } else {
                    cout << "Array elements: ";
                    for (i = 0; i < n; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 5: // Sort
                for (i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (arr[i] > arr[j]) {
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                cout << "Array sorted in ascending order!" << endl;
                break;

            case 6:
                cout << "Exiting program" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
