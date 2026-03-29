#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {//function template to swap values of any data type
    T temp = a;//store the value of a in a temporary variable
    a = b;//assign the value of b to a
    b = temp;//assign the value of temp (original a) to b
}

int main() {
    int x = 5, y = 10;//initialize two integers
    swapValues(x, y);//swap values of integers
    cout << "int:    x=" << x << " y=" << y << endl;//swap values of integers and print the result

    double p = 1.1, q = 9.9;//initialize two doubles
    swapValues(p, q);//swap values of doubles
    cout << "double: p=" << p << " q=" << q << endl;//swap values of doubles and print the result

    string s1="Hello", s2="World";//initialize two strings
    swapValues(s1, s2);//swap values of strings
    cout << "string: " << s1 << " " << s2 << endl;//swap values of strings and print the result
}