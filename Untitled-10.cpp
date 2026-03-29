//Menu driven calculator using switch

#include<iostream>
using namespace std;
int main(){
    int a, b,ch;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<" Select any one number 1.Add 2.Subtract 3.Multiply 4. Divide\n";
    cin>>ch;
    switch(ch){
        case 1: cout<<"Sum ="<<a+b<<endl;
        break;
        case 2: cout<<"Difference ="<<a-b<<endl;
        break;
        case 3: cout<<"Product = "<<a*b<<endl;

        
        break;
        case 4: cout<<"Quotient = "<<a/b<<endl;
        break;
        default: cout<<"Invalid choice!";
    }
    return 0;
}
//demonstarted using switch statement
// Menu-driven program to perform basic arithmetic operations
