#include<iostream>
using namespace std;


void toUpperCase(char arr[]){
    
     for(int i = 0; arr[i] != '\0'; i++) {
        if(arr[i] >= 'a' && arr[i] <= 'z') {
            arr[i] = arr[i] - 32;
        }
    }
}

int main() {
    char arr[100];

    cin.getline(arr, 100);

    toUpperCase(arr);

    cout << arr;

    return 0;
}