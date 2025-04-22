#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    float salary;
    string designation;

public:
    // Parameterized constructor
    Employee(int id, string n, float sal, string desig) {
        empID = id;
        name = n;
        salary = sal;
        designation = desig;
    }

    // Copy constructor
    Employee(const Employee &e) {
        empID = e.empID;
        name = e.name;
        salary = e.salary;
        designation = e.designation;
    }

    // Display employee details
    void displayDetails() const {
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Designation: " << designation << endl;
        cout << "--------------------------" << endl;
    }
};

// Main function to demonstrate
int main() {
    // Create E1 using parameterized constructor
    Employee E1(101, "Alice Johnson", 55000.50, "Software Engineer");

    // Create E2 as a copy of E1
    Employee E2 = E1;

    // Display both employee details
    cout << "Employee E1 Details:" << endl;
    E1.displayDetails();

    cout << "Employee E2 (Copy of E1) Details:" << endl;
    E2.displayDetails();

    return 0;
}


