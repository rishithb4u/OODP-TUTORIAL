#include <iostream>
using namespace std;

class Student {
public:
    virtual void study() = 0;
};

class Undergraduate : public Student {
public:
    void study() override {
        cout << "Undergraduate studies 6 hours a day." << endl;
    }
};

class Postgraduate : public Student {
public:
    void study() override {
        cout << "Postgraduate studies 8 hours a day." << endl;
    }
};

int main() {
    Student* s1 = new Undergraduate();
    Student* s2 = new Postgraduate();

    s1->study();
    s2->study();

    delete s1;
    delete s2;
    return 0;
}


