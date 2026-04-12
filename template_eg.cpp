#include<iostream>// This line includes the iostream library, which is necessary for input and output operations in C++. It allows us to use the cout object to print to the console.
using namespace std;// This line allows us to use names from the standard library (like cout) without having to prefix them with std::.

template <typename T1, typename T2>// Function template to display two values of different types
void display(T1 a , T2 b){ // T1 and T2 are placeholders for the actual types that will be used when the function is called
    cout<<"First: "<< a<<",Second : "<<b<<endl;// This function takes two parameters of types T1 and T2 and prints them to the console
}

int main(){// The main function demonstrates the use of the display function template by calling it with different types of arguments
    display(10, 3.14);// Calls display with an integer and a double
    display("Hello", 42);// Calls display with a string literal and an integer
    return 0;// The main function returns 0, indicating that the program ended successfully
}
//T1 AND T2 arev the ctual placeholders foir the actual type thet will beused when thr function is called When we call display(10,3.14),T1 is replaced with int and T2 is replaced with double.