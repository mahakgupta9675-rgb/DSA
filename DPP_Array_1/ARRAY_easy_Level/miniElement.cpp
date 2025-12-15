//Find the minimum element in the array.

#include<iostream>
using namespace std;

int main(){
    int arr[]={6,5,4,2,8,7};
    int min = arr[0];

    for(int i = 0; i<5 ;i++){
        if(arr[i] < min ){
            min = arr[i];
        }
    }

    cout<<"Mininum element is : "<<min;
}