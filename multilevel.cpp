#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    void setName(string n){
        name=n;
    }
};

class Student: public Person{
    public:
    int roll;
    void setRoll(int r){
        roll=r;
    }
};

class GraduateStudent: public Student{
    public:
    string degree;
    void setDegree(string d){
        degree=d;
    }

    display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll:"<<roll<<endl;
        cout<<"Degree: "<<degree<<endl;
    }
};

int main(){
    GraduateStudent g;
    g.setName("Vaiibhavi");
    g.setRoll(123);
    g.setDegree("B.TECH");
    g.display();
    return 0;
}