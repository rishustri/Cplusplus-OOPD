#include<iostream>
using namespace std;

void demoFunction(){
     static int count=0;// staic variable retains its value between function call//
    count++;// without static, count would reset to 0 everytime//
    cout<<"Count:"<<count<<endl;

}
 int main(){
    demoFunction();
    demoFunction();
    demoFunction();
    demoFunction();
    demoFunction();

    return 0;
 }
 //useful for tracking state acrioss multiple