#include <iostream>
#include <vector>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() const = 0; // Pure virtual function
    virtual double area() const = 0;
    virtual ~Shape() {} // Virtual destructor
};

// Derived class: Circle
class Circle : public Shape {

private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    void draw() const override {
        cout << "Drawing a Circle with radius " << radius << endl;
    }
    double area() const override {
        return 3.14159 * radius * radius;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    void draw() const override {
        cout << "Drawing a Rectangle of " << width << " x " << height << endl;
    }
    double area() const override {
        return width * height;
    }
};

int main() {
    vector<Shape*> shapes;
    shapes.push_back(new Circle(5));
    shapes.push_back(new Rectangle(4, 6));

    for (auto shape : shapes) {
        shape->draw();
        cout << "Area: " << shape->area() << endl;
    }

    // Clean up
    for (auto shape : shapes) {
        delete shape;
    }

    return 0;
}