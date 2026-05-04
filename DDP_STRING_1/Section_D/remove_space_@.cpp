// 2. Write a program to replace spaces with @ in a character array.
//     - Input: Alpha Intern
//     - Output: Alpha@Intern


#include<iostream>
using namespace std;

void replaceSpaces(char arr[]) {
    for(int i = 0; arr[i] != '\0'; i++) {
        if(arr[i] == ' ') {
            arr[i] = '@';
        }
    }
}

int main() {

    char arr[100];

    cin.getline(arr, 100);

    replaceSpaces(arr);

    cout << arr;

    return 0;
}


