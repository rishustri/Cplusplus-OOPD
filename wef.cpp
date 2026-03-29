#include <iostream>
using namespace std;

class Person {              // Top base
public:
    string name;
    void introduce() {
        cout << "I am " << name << endl;
    }
};

// virtual keyword prevents diamond problem!
class Student : virtual public Person {
public:
    void study() {
        cout << name << " is studying" << endl;
    }
};

class Teacher : virtual public Person {
public:
    void teach() {
        cout << name << " is teaching" << endl;
    }
};

// Inherits from BOTH Student and Teacher
class TeachingAssistant : public Student,
                          public Teacher {
public:
    void assist() {
        cout << name << " is assisting" << endl;
    }
};

int main() {
    TeachingAssistant ta;
    ta.name = "Ravi";//Only name exists due to virtual inheritence
    ta.introduce(); // from Person (only 1 copy!)
    ta.study();     // from Student
    ta.teach();     // from Teacher
    ta.assist();    // own method
    return 0;
}
