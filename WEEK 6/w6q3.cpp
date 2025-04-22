#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    void setName(string n) { name = n; }
    void showName() { cout << "Name: " << name << endl; }
};

class Teacher : public Person {
protected:
    string subject;
public:
    void setSubject(string s) { subject = s; }
    void showSubject() { cout << "Subject: " << subject << endl; }
};

class Professor : public Teacher {
    string department;
public:
    void setDepartment(string d) { department = d; }
    void showDepartment() {
        showName();
        showSubject();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Professor p;
    p.setName("Dr. Arjun");
    p.setSubject("Cyber Security");
    p.setDepartment("CSE");
    p.showDepartment();
    return 0;
}

