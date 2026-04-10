#include<iostream>
using namespace std;

int divide(int a ,int b){
    if(b==0){
        throw " Division by zero error! " ;
   }
   return a/b;

}

int main(){
   try{
   cout<<divide(10,2) <<endl;
   cout<<divide(10,0) <<endl;
   cout<<"This line won't execute"<<endl;
   }


   catch(const char* msg){
    cout<<"Exception caught: "<<msg<<endl;
    }
        

    cout<<"Program continues after execution"<<endl;
    return 0;

}