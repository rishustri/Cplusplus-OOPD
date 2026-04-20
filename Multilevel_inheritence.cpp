#include <iostream>
using namespace std;

class Person {//Base class
public: void info(){ cout<<"I am a Person\n"; }//Member function of class Person
};//Derived class Student inheriting from base class Person
class Student : public Person {//Derived class Student inheriting from base class Person
public: void study(){ cout<<"I am a Student\n"; }//Member function of class Student
};//Derived class Graduate inheriting from base class Student
class Graduate : public Student {//Derived class Graduate inheriting from base class Student
public: void grad(){ cout<<"I am a Graduate\n"; }//Member function of class Graduate
};//Main function

int main(){//Creating object of class Graduate
    Graduate g;//Accessing member functions of class Person, Student and Graduate using object of class Graduate
    g.info();//Accessing member function of class Person using object of class Graduate
    g.study();//Accessing member function of class Student using object of class Graduate
    g.grad();//Accessing member function of class Graduate using object of class Graduate
}