#include<iostream>
using namespace std;
int main(){

    char arr[10];
    cin.getline(arr,10);

    int start =0;
    int end = '\0'-2;

    bool palindrome = true;

    for(int i=0; i<arr[10] != '\0';i++){
        if(arr[start] != arr[end]){
            palindrome=false;
            break;
        }
    }

    if(palindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}