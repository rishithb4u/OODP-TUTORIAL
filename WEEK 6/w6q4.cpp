#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;
public:
    void setStudent(string n, int r) {
        name = n;
        rollNo = r;
    }
    void showStudent() {
        cout << "Name: " << name << ", Roll No: " << rollNo << endl;
    }
};

class Marks : virtual public Student {
protected:
    int m1, m2, m3, totalAcademic;
public:
    void setMarks(int a, int b, int c) {
        m1 = a; m2 = b; m3 = c;
        totalAcademic = m1 + m2 + m3;
    }
    void showMarks() {
        cout << "Academic Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Total Academic Marks: " << totalAcademic << endl;
    }
};

class Sports : virtual public Student {
protected:
    int sportsMarks;
public:
    void setSports(int s) {
        sportsMarks = s;
    }
    void showSports() {
        cout << "Sports Marks: " << sportsMarks << endl;
    }
};

class Result : public Marks, public Sports {
    float average;
public:
    void calculate() {
        int total = totalAcademic + sportsMarks;
        average = total / 4.0;
        showStudent();
        showMarks();
        showSports();
        cout << "Overall Total Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
    }
};

int main() {
    Result r;
    r.setStudent("Madhumitha", 5);
    r.setMarks(80, 85, 90);
    r.setSports(15);
    r.calculate();
    return 0;
}


