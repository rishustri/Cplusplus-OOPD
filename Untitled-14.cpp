#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    for(int x: arr) cout<<x<<" ";
    return 0;
}

//range-based for loop simplifies iteration over arrays and collections
//demonstrates modern C++ features for cleaner code
//output: 1 2 3 4 5