#include<iostream>
using namespace std;

template<typename T>//T is a placeholder for any data type
T findMax( T a, T b){//function template to find te maximum of two value
return (a>b)?a:b;//returns a if a is greater than b, otherwise returns b
}

int main(){
    cout<<findMax(10,20)  <<endl;//int
    cout<<findMax(3.14,2.71)  <<endl;//double
    cout<<findMax('a','z')  <<endl;//char
    cout<<findMax(100L,200L)  <<endl;//long
}