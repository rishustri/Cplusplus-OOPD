#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    // Constructor
    Student(string n, int r, float m) {
        name = n;
        rollNumber = r;
        marks = m;
    }

    // Method to display student details
    void display() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }

    // Method to check pass/fail
    void checkResult() const {
        if (marks >= 50)
            cout << name << " has passed." << endl;
        else
            cout << name << " has failed." << endl;
    }
};

int main() {
    // Creating student objects
    Student s1("Vaiibhavi", 101, 85.5);
    Student s2("Rahul", 102, 45.0);

    // Display details
    s1.display();
    s1.checkResult();

    cout << endl;

    s2.display();
    s2.checkResult();

    return 0;
}