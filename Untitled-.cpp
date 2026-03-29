#include<iostream>
using namespace std;
int main(){
    int a,b,ch;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"1.Add 2.Subtract 3.Multiply 4.Divide\n";
    cin>>ch;
    switch(ch){
        case 1: cout<<"Sum="<<a+b; break;
        case 2: cout<<"Diff="<<a-b; break;
        case 3: cout<<"Product="<<a*b; break;
        case 4: cout<<"Quotient="<<a/b; break;
        default: cout<<"Invalid choice";
    }
    return 0;
}