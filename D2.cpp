#include<iostream>
using namespace std;
class Student{
    int marks;
    public:
    Student(){ marks=0; }
    Student(int m){ marks=m; }
    Student(Student &s){ marks=s.marks; }
    void display(){ cout<<"Marks: "<<marks<<endl; }
 
};

int main(){
    Student s1; Student s2(90); Student s3(s2);
    s1.display(); s2.display(); s3.display();
}