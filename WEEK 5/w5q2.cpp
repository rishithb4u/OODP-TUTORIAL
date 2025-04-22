#include <iostream>
using namespace std;

class BankAccount {
    int accNo;
    float balance;

public:
    BankAccount(int acc, float bal) {
        accNo = acc;
        balance = bal;
    }

    BankAccount(int acc) {
        accNo = acc;
        balance = 0;
    }

    void deposit(int amount) {
        balance += amount;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(int amount) {
        if (balance >= amount) balance -= amount;
    }

    void withdraw(float amount) {
        if (balance >= amount) balance -= amount;
    }

    bool operator > (BankAccount b) {
        return balance > b.balance;
    }

    void show() {
        cout << "Account No: " << accNo << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount a1(101, 5000), a2(102);

    a2.deposit(2500.50f);
    a1.withdraw(1000);
    
    a1.show();
    a2.show();

    if (a1 > a2)
        cout << "Account 1 has more balance.\n";
    else
        cout << "Account 2 has more balance.\n";

    return 0;
}

