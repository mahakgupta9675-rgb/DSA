//Section A : Coding Question------------------------------------------------
//question 1 : Take input integer n and print “Alpha Intern” n times.
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"Alpha Intern"<<endl;
    }
}   
//question 2 : Take input integer n and print numbers from 1 to n.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cout<<i<<endl;
    }
}
//question 3 : Take input integer n and print numbers from n down to 1.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n ; i>=0;i--){
        cout<<i<<endl;
    }
}
//question 4 :Take input integer n and print all even numbers from 1 to n.
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n ;
    for(int i =1; i<=n; i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
}
//question 5 : Take input integer n and print all odd numbers from 1 to n.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        if (i%2!=0){
            cout<<i<<endl;
        }
    }
}
//question 6 : Take input integers a, d, n, and print the first n terms of AP starting from a.
#include<iostream>
using namespace std;
int main(){
    int a,d,n;
    cin>>a>>d>>n;
    for(int i = 0; i<n; i++){
        int Tn = a + i*d;
        cout<<"First n terms : "<< Tn<<endl;
    }
}
//question 7 : Take input integer n, and print the AP 100, -97, -94… but only show the positive terms.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a = 100, d = -3;
    for(int i=0; i<n ; i++){
        int Ap = a+i*d;
        cout<< Ap <<endl;      
    }
 }
//question 8 : Take input integers a, r, n and print the first n terms of GP.
#include<iostream>
using namespace std;
int main(){
    int a,r,n;
    cin>>a>>r>>n;
    int term = a;
    for(int i = 0; i<n; i++ ){
        cout<<term <<" ";
        term = term*r;
    }
}
//question 9 : Take input integer n and print numbers from 1 to n using a while loop.
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<i<<endl;
        i++;
    }
}
//question 10 : Take input integer n and print the sum from 1 to n.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum = sum + i;
    }
    cout<<sum;
}
//question 11 : Take input integer n and print all multiples of 3 from 1 to n using a while loop.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while (i<=n){
        if(i%3==0){
            cout<<i<<" ";
        }
        i++;
    }
}
//question 12 : Take input integer n and print the factorial of n using a for loop.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int factorial=1;
    for(int i=1; i<=n; i++){
        factorial=factorial*i;    
    }
    cout<<"factorial of n : "<<factorial;
}
