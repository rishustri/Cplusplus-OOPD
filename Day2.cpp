#include <iostream>
using namespace std;

int main(){
    int num=10;
    int *ptr=&num; //declares a pointer to an integer, and initializes it with the address of the variable num.//
    cout<<"Value of number: "<<num<<endl;
    cout<<"Address of num: "<<ptr<<endl;
    cout<<"Value stored in pointer: "<<ptr<<endl;
    cout<<"Value pointed by ptr: "<<*ptr<< endl;

    return 0;
}
//*ptr derefence the pointer to get the value stored at that address//