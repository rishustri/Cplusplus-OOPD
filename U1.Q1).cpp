#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empID;
    string empName;
    double basicSalary;

public:
    // Read employee details
    void readDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, empName);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    // Calculate gross salary
    double calculateGross() {
        double hra = basicSalary * 0.20;   // 20% HRA
        double da  = basicSalary * 0.10;   // 10% DA
        return basicSalary + hra + da;
    }

    // Display employee details and gross salary
    void displayDetails() {
        cout << "\n--- Employee Details ---\n";
        cout << "Employee ID   : " << empID << "\n";
        cout << "Employee Name : " << empName << "\n";
        cout << "Basic Salary  : Rs. " << basicSalary << "\n";
        cout << "HRA (20%)     : Rs. " << basicSalary * 0.20 << "\n";
        cout << "DA  (10%)     : Rs. " << basicSalary * 0.10 << "\n";
        cout << "Gross Salary  : Rs. " << calculateGross() << "\n";
        cout << "------------------------\n";
    }
};

int main() {
    Employee emp1, emp2;

    cout << "=== Enter Details for Employee 1 ===\n";
    emp1.readDetails();

    cout << "\n=== Enter Details for Employee 2 ===\n";
    emp2.readDetails();

    emp1.displayDetails();
    emp2.displayDetails();

    return 0;
}