//parameters act as variabkes inside the functiion
#include<iostream>
using namespace std;

void myFunction(string fname) {//fname is thge parameter
    cout<<fname<<"Refsnes\n";//refsnes is the surname
}
int main(){
 myFunction("Rishu");//rishu is the argument
 myFunction("Badmash");//badmash is the argument
 myFunction("Rishu Badmash");
 return 0;

}

// when aparam,eter is passed to the function it is called an argukment
//so fname is rthe parameter and rishu ,  bdmadh, rishu badmash are the argumlents
// where the function is called 3 times nad so the surname is added to it in the putput