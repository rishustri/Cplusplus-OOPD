#include<iostream>
using namespace std;// C++ program to demonstrate single inheritance
class Base{// base class
public:// base class function
    void display(){// base class function
        cout << "Base class function \n";// base class function
    }

    };// base class
    class Derived : public Base {// derived class
    public:// derived class function
        void show(){// derived class function
            cout<<"Derived class function \n";}// derived class function     }
    };// derived class

    int main(){ // main function
        Derived d;// create object of derived class
        d.display();// call base class function
        d.show();// call derived class function
        return 0;// return statement
}