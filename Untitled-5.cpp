#include<iostream>
using namespace std;

 void demo(){
    static int x=0;
    x++;
    cout << x<< endl;
    cin>>x;
    
 }

 int main(){
    demo();
    demo();
    
    demo();
    return 0;
 }
 //static retains value across calls
 //demonstrates avrisble stprage classes
