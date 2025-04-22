#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentID;
    string name;
    float marks[5];

public:
    // Constructor to initialize student details and marks
    Student(string id, string n, float m[]) {
        studentID = id;
        name = n;
        for (int i = 0; i < 5; i++) {
            marks[i] = m[i];
        }
    }

    // Function to calculate average marks
    float calculateAverage() const {
        float sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += marks[i];
        }
        return sum / 5;
    }

    // Function to display student details
    void displayDetails() const {
        cout << "Student ID: " << studentID << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << "\nAverage Marks: " << calculateAverage() << endl;
        cout << "-----------------------------" << endl;
    }
};

// Demonstration
int main() {
    float marks1[5] = {85, 90, 78, 92, 88};
    float marks2[5] = {70, 75, 80, 68, 72};

    Student student1("S101", "John Doe", marks1);
    Student student2("S102", "Jane Smith", marks2);

    student1.displayDetails();
    student2.displayDetails();

    return 0;
}
