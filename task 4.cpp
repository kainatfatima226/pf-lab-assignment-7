#include<iostream>
using namespace std;
int main(){
    const int size=10;
    int numbers[size];
    cout<<"Enter ten numbers:";
    for(int i=0;i<size;i++){
        cin>>numbers[i];
    }
    cout<<"Array in reverse order:";
    for(int i=size-1;i>=0;i--){
        cout<<numbers[i]<<" ";
    }
    return 0;
}