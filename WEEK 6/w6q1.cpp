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
};

class SportsPlayer {
protected:
    string sportName;
    int ranking;
public:
    void setPlayer(string s, int r) {
        sportName = s;
        ranking = r;
    }
};

class SportStudent : public Student, public SportsPlayer {
public:
    void display() {
        cout << "Name: " << name << ", Roll No: " << rollNo << endl;
        cout << "Sport: " << sportName << ", Ranking: " << ranking << endl;
    }
};

int main() {
    SportStudent ss;
    ss.setStudent("Madhumitha", 101);
    ss.setPlayer("Badminton", 2);
    ss.display();
    return 0;
}

