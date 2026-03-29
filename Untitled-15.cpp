#include<iostream>
#include<memory>
using namespace std;
class Student {
    public: Student(){ cout<<"Object created\n"; }
            ~Student(){ cout<<"Object destroyed\n"; }
};
int main(){
    unique_ptr<Student> s(new Student());
    return 0;
}

//unique_ptr automatically manages memory, ensuring proper cleanup
//demonstrates RAII (Resource Acquisition Is Initialization) in C++
//output: Object created
//        Object destroyed
//unique_ptr is a smart pointer that owns and 
manages another object through a pointer and 
disposes of that 
object when the unique_ptr goes out of scope.