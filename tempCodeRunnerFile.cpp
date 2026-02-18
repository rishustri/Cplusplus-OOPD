#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animals make sounds" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal a;
    Dog d;

    a.sound();
    d.sound();
    return 0;
}