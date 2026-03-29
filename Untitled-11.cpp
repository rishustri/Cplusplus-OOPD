#include<iostream>
using namespace std;
int main(){
    int a, b, ch;
    cout<<"Enter two numbers:  ";
    cin>>a>>b;
    cout<<"Enter your choice: 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division: ";
    cin>>ch;
    switch(ch){
        case 1: cout<<"Additon: "<<a+b;
        break;
        case 2: cout<<"Difference : "<<a-b;
        break;
        case 3: cout<<"Product : "<<a*b;
        break;
        case 4 : cout<<"Quotient : "<<a/b;
        break;
        
        default:
        cout<<"Inavild Choice!";
    }
    return 0;
}