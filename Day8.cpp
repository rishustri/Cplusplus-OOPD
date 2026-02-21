#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    BankAccount(int b) {
        balance = b;
    }

    void deposit(int amount) {
        balance += amount;
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc(1000);
    acc.deposit(500);
    cout << "Current Balance: " << acc.getBalance() << endl;
    return 0;
}