#include <iostream>
using namespace std;

struct MyStruct {
    int x; // public by default
    void show() { cout << "Struct x = " << x << endl; }
};

class MyClass {
    int y; // private by default
public:
    MyClass(int val) : y(val) {}
    void show() { cout << "Class y = " << y << endl; }
};

int main() {
    MyStruct s{10};
    s.show();

    MyClass c(20);
    c.show();
    return 0;
}