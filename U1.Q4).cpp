#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int    accNumber;
    string accHolder;
    double balance;

public:
    // Constructor to initialise account
    BankAccount(int no, string name, double initialBalance) {
        accNumber = no;
        accHolder = name;
        balance   = initialBalance;
    }

    // Deposit money
    void deposit() {
        double amount;
        cout << "\n  Enter amount to deposit : Rs. ";
        cin  >> amount;
        if (amount <= 0) {
            cout << "  Invalid amount!\n";
            return;
        }
        balance += amount;
        cout << "  Rs. " << amount << " deposited successfully.\n";
    }

    // Withdraw money
    void withdraw() {
        double amount;
        cout << "\n  Enter amount to withdraw : Rs. ";
        cin  >> amount;
        if (amount <= 0) {
            cout << "  Invalid amount!\n";
        } else if (amount > balance) {
            cout << "  Insufficient balance!\n";
        } else {
            balance -= amount;
            cout << "  Rs. " << amount << " withdrawn successfully.\n";
        }
    }

    // Balance enquiry
    void balanceEnquiry() {
        cout << "\n+--------------------------------------+\n";
        cout << "|          ACCOUNT SUMMARY             |\n";
        cout << "+--------------------------------------+\n";
        cout << "  Account Number : " << accNumber << "\n";
        cout << "  Account Holder : " << accHolder << "\n";
        cout << "  Balance        : Rs. " << balance << "\n";
        cout << "+--------------------------------------+\n";
    }
};

// Display menu
void showMenu() {
    cout << "\n+--------------------------------------+\n";
    cout << "|         BANK ACCOUNT MENU            |\n";
    cout << "+--------------------------------------+\n";
    cout << "|  1. Deposit                          |\n";
    cout << "|  2. Withdraw                         |\n";
    cout << "|  3. Balance Enquiry                  |\n";
    cout << "|  4. Exit                             |\n";
    cout << "+--------------------------------------+\n";
    cout << "  Enter your choice : ";
}

int main() {
    // Create account object with initial values
    BankAccount account(100101, "Arun Kumar", 5000.00);

    cout << "\n  Welcome to MyBank!\n";
    cout << "  Account created with initial balance: Rs. 5000\n";

    int choice;

    // ── do-while loop keeps menu running until user exits ──
    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                account.deposit();
                break;
            case 2:
                account.withdraw();
                break;
            case 3:
                account.balanceEnquiry();
                break;
            case 4:
                cout << "\n  Thank you for banking with MyBank!\n";
                cout << "  Goodbye!\n\n";
                break;
            default:
                cout << "\n  Invalid choice! Please enter 1-4.\n";
        }

    } while (choice != 4);   // loop exits only when user chooses 4

    return 0;
}