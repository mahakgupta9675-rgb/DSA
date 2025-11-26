// Write a program in C++ to find a prime number within a range.


#include<iostream>
using namespace std;
int main(){
    int start,end;
    cout<<"Input number for starting range: ";
    cin>>start;
    cout<<"Input number for ending range: ";
    cin>>end;
    int totalprime=0;
    cout<<"The total number of prime numbers between 1 to 100 is: "<<endl;
    for(int num=start;num<=end;num++){
        int count = 0;
        for(int i=1;i<=num;i++){
            if(num%i!=0)
                continue;
                count++;
        }
        if(count==2){
            cout<<num<<" "<<endl;
            totalprime++;
        }   
    }
    cout<<"The total number of prime numbers between 1 to 100 is: "<<totalprime<<endl;
}
//output -> Input number for starting range: 1
// Input number for ending range: 100
//The prime numbers between 1 and 100 are:
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
//The total number of prime numbers between 1 to 100 is: 25