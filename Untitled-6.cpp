#include<iostream>
using namespace std ;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x=10, y=20;
    swap(&x, &y);
    cout<<"Before swapping: x : "<<x<<" y : "<<y;
    cin.get();
    cout<<"After swapping: x : "<<y<<" y : "<<x;
    cin.get();
    return 0;
}
