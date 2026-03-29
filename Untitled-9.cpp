#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int max=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<"Largest number in array is: "<<max;
    return 0;
}
//iterates array with loop
//demonstartes array with comparison to find largest number


