// to find max
#include<iostream>
using namespace std;

template<typename T>//T is a placeholder for any data type
T findMax(T a, T b){//function template to find the maximum of two values
 return (a>b)?a:b;//returns a if a is greater than b, otherwise returns b
}

int main(){
    cout<<findMax(10,25) <<endl; //findMax(10.5,25.5)
    cout<<findMax(3.5,9.1)  <<endl;//double
    cout<<findMax('a','z')  <<endl;//char
    cout<<findMax(100L,200L)  <<endl;//long
}
//it uses a ternanry opertaor  for comparison and to find the largest value,
