#include <iostream>
#include <exception>
using namespace std;

// Custom Exception Class
class AgeException : public exception {
public:
    const char* what() const noexcept override {
        return "Age must be between 0 and 150!";
    }
};

class NegativeException : public exception {
public:
    const char* what() const noexcept override {
        return "Value cannot be negative!";
    }
};

void validateAge(int age) {
    if (age < 0) throw NegativeException();
    if (age > 150) throw AgeException();
    cout << "Valid age: " << age << endl;
}

int main() {
    int ages[] = {25, -5, 200};

    for (int age : ages) {
        try {
            validateAge(age);
        }
        catch (NegativeException& e) {
            cout << "Error: " << e.what() << endl;
        }
        catch (AgeException& e) {
            cout << "Error: " << e.what() << endl;
        }
    }
    return 0;
}