#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(string accNum, string accHolder, double bal) {
        accountNumber = accNum;
        accountHolderName = accHolder;
        balance = bal;
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << " successfully." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Withdraw function (no overdrafts allowed)
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrew $" << amount << " successfully." << endl;
        } else {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }

    // Display function
    void display() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

// Demonstration
int main() {
    BankAccount acc1("1234567890", "Alice Johnson", 1000.0);

    acc1.display();
    cout << endl;

    acc1.deposit(500.0);
    acc1.withdraw(200.0);
    acc1.withdraw(1500.0); // Should fail

    cout << endl;
    acc1.display();

    return 0;
}
