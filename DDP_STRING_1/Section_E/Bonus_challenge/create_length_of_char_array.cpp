#include<iostream>
using namespace std;

int myLength(char arr[]){
    int length=0;
    for(int i=0; arr[i]!='\0'; i++){
        length++;
    }
    return length;
}
int main(){

    char arr[50];
    cin.getline(arr,50);

    cout<< myLength(arr);
}