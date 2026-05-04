//Q.  Write a program to count the length of a character array without using strlen().

#include<iostream>
using namespace std;
int main(){
    char ch[50];
    cin.getline(ch,50);
    int count =0;
    for(int i = 0; ch[count]!='\0';i++){
        count++;
    }
    cout<<"Length of string: "<< count;

}