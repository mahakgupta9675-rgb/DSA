// WAP to print the sum of all the even digits of a given number.


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum =0;
    for(int i=0;n>0;i++){
        int remender=n%10;
        if(remender%2==0){
            sum+=remender;
        }
        n/=10;
    }
    cout<<sum<<endl;
}
//Sample Input : 4556  .  Output :10