#include<iostream>
using nampespace std;

int main(){
    int a,b,ch;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter 1 for Addition 2 for Subtraction 3 for Multiplication 4 for Division: ";
    cin>>ch;
    switch(ch){
        case 1: cout<<"Addition: "<<a+b;
                break;
        case 2: cout<<"Subtraction: "<<a-b;
                break;
        case 3: cout<<"Multiplication: "<<a*b;
                break;
        case 4: cout<<"Division: "<<a/b;
                break;
        default: cout<<"Invalid choice";

    }
    return 0;
}