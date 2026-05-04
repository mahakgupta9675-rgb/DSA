#include <iostream>
using namespace std;

int main() {
    char arr[6] = "Hello";
    cout << arr;
}

// ❓ What is the mistake here?

// Array size is 5 but "Hello" requires 6 characters including the null character '\0'.
//use char [6] or char arr[]