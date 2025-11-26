//WAP  to print the sum of a given number and its reverse.


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int original =n;
    int reverse=0;
    for(int i=0;0<n;i++){
        reverse= reverse*10 + (n%10);
        n/=10;
        
    }
    int sum = original+reverse;
    cout<<sum <<"["<<original<<"+"<<reverse<<"]";
}
//Sample Input : 12.  output : 33 [12+21]