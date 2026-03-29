//demonstrate static variable inside a function
#include<iostream>
using namespace std;
 void demo(){
    static int x=66;
    x++;
    cout<<x<<endl;
 }

 int main(){
 demo();demo(); demo();
 return 0;
}