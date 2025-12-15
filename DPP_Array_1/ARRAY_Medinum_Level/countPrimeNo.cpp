// Count how many elements are prime numbers.

#include<iostream>
using namespace std;

int main(){
    int arr[]={2,8,3,5,13,22,23};
    int count = 0;

    for(int i = 0; i<7;i++){
        if(arr[i]%2 !=0){
            cout<<arr[i]<<" ";
            count++;
        }
    }
    
    cout<<"Number of element greater then 100: "<<count;
}