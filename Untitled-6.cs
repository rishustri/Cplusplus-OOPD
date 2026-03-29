#include<iostream>
using namespace std;
class Student {
    private: int marks; //private data memeber
    public:
    void setMarks(int m){ marks=m; } //setter method
    int getMarks(){ return marks; } //getter method
};
int main(){
    Student s;
    s.setMarks(95); // setting marks using public method
    cout<<"Marks = "<<s.getMarks(); //accessing marks using public method
    return 0;
}