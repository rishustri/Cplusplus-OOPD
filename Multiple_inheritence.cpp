#include <iostream>
using namespace std;

class A { public: void showA(){ cout<<"Class A\n"; } };//Base class A
class B { public: void showB(){ cout<<"Class B\n"; } };//Base class B

class C : public A, public B {//Derived class C
public: void showC(){ cout<<"Class C\n"; }//Member function of class C
};

int main(){
    C obj;//Creating object of class C
    obj.showA();//Accessing member function of class A using object of class C
    obj.showB();//Accessing member function of class B using object of class C
    obj.showC();//Accessing member function of class C using object of class C
}