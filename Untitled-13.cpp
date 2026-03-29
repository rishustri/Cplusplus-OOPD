#include<iostream>
using namespace std;
class Person {
    public: string name;
};
class Student: public Person {
    public: int marks;
};
int main(){
    Student s;
    s.name="Vaiibhavi";
    s.marks=90;
    cout<<s.name<<" "<<s.marks;
    return 0;
}

//inheritance allows code reuse and hierarchical relationships
//Student inherits from Person, gaining access to name and marks
//demonstrates inheritance in OOP
