#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swapValues(x, y);
    cout << "int:    x=" << x << " y=" << y << endl;

    double p = 1.1, q = 9.9;
    swapValues(p, q);
    cout << "double: p=" << p << " q=" << q << endl;

    string s1="Hello", s2="World";
    swapValues(s1, s2);
    cout << "string: " << s1 << " " << s2 << endl;
}