#include <iostream>
using namespace std;

class Shape {// Abstract class
public:
    virtual void area() = 0; // Pure virtual function
};// Base class
// Derived class
class Circle : public Shape {// Derived class
public:// Implementing pure virtual function
    void area(){ cout<<"Area of Circle = πr^2\n"; }// Member function of class Circle
};// Derived class

int main(){// Main function
    Shape* s = new Circle();// Creating object of class Circle using pointer of class Shape
    s->area();// Accessing member function of class Circle using pointer of class Shape
    delete s;// Deleting object of class Circle
}