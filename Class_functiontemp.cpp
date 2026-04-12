#include <iostream>
using namespace std;

// Class Template
template <typename T>
class Stack {
private:
    T arr[100];
    int top;

public:
    Stack() {
        top = -1;  // Constructor
    }

    void push(T value) {
        arr[++top] = value;
        cout << value << " pushed to stack" << endl;
    }

    T pop() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return T();  // return default value
        }
        return arr[top--];
    }

    T peek() {
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    // Integer Stack
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    cout << "Popped: " << intStack.pop() << endl;

    cout << "---" << endl;

    // String Stack
    Stack<string> strStack;
    strStack.push("Hello");
    strStack.push("World");
    cout << "Popped: " << strStack.pop() << endl;

    return 0;
}