// Level Easy -----------------------------------------------------------
// question 1------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
    int x,b;
    cin>>x>>b;
    cout<<"Sum: "<<x+b<<endl;
    cout<<"Difference: "<<x-b<<endl;
    cout<<"Product: "<<x*b<<endl;
    cout<<"Quotient: "<<x/b<<endl;}
//question 2--------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    cout<<"Reslut of ++x"<<++x<<endl;
    cout<<"Reslut of x++"<<x++<<endl;
    cout<<"Final value of x"<<x<<endl;}
//question 3--------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
    int x,b;
    cin>>x>>b;
    cout<<"x % b: "<<(x % b)<<endl;
    cout<<"b % x: "<<(b % x)<<endl;}
//question 4--------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
    char x;
    cin>>x;
    cout<<"ASCII value "<<int(x)<<endl;}
//question 5---------------------------------------------------------------
#include<iostream>   
using namespace std;
int main() {
    int ascii;
    cin>>ascii;
    cout<<"Character: "<<char(ascii)<<endl;}
//question 6---------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
    int x,b;
    cin>>x>>b;
    cout<<"Remainder: "<<x % b<<endl;
    }
//question 7---------------------------------------------------------------
#include<iostream>       
using namespace std;
int main() {
    int x;
    cin>>x;
    cout<<"x + 5"<<x + 5<<endl;
    cout<<"x - 3"<<x - 3<<endl; 
    cout<<"x * 2"<<x * 2<<endl;
    cout<<"x / 2"<<x / 2<<endl;
    cout<<"x % 2"<<x % 2<<endl;
    } 
//question 8---------------------------------------------------------------
#include<iostream>   
using namespace std;
int main() {
    double x;
    cin>>x;
    cout<<"Integer part: "<<int(x)<<endl;}
//question 9---------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
    double x;
    cin>>x;
    cout<<"Decimal part: "<<x - int(x)<<endl;}
//question 10--------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
    char ch;
    cin>>ch;
    ch++;
    cout<<"Next character: "<<ch<<endl;}
//question 11-------------------------------------------------------------
#include<iostream>
using namespace std; 
int main() {
    char ch;
    cin>>ch;
    ch--;
    cout<<"Previous character: "<<ch<<endl;}
//question 12-------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    cout<<"value before post-increment x++: "<<x++<<endl;
    cout<<"value after post-increment x++: "<<x<<endl;
    cout<<"value after pre-increment ++x: "<<++x<<endl;}
//question 13-------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    double result = (double(a)/double(b));
    cout<<"Result of a / b: "<<float(result)<<endl;}
//question 14-------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
    char c;
    cin>>c;
    cout<<c-'0'<<endl;}
//question 15-------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
    float a,b;
    cout<<"Enter two float numbers: ";
    cin>>a>>b;
    cout<<"Sum: "<<a+b<<endl;
    cout<<"Difference: "<<a-b<<endl;
    cout<<"Product: "<<a*b<<endl;
    cout<<"Divison: "<<a/b<<endl;}
//question 16-------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    cout<<"(a+b)*(a-b): "<<(a+b)*(a-b)<<endl;}
//question 17-------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
    int a,b; 
    cin>>a>>b;
    cout<<"(a*b) % 10: "<<(a*b) % 10<<endl;
    cout<<"(a+b) % 5: "<<(a+b) % 5<<endl;} 
//question 18-------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    cout<<"char(x): "<<char(x);}
//question 19-------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
    float x;
    cin>>x;
    cout<<(int)x;}
//question 20-------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"a + b * c - (++b): "<<a + b * c - (++b)<<endl;}
//Level Hard ------------------------------------------------------------
//question 1------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;n>0;i++){
        sum+=n%10;
        n/=10;
    }
    cout<<sum<<endl;
}
//question 2------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int reverse=0;
    for(int i=0;n>0;i++){
        reverse=reverse*10 + n%10;
        n/=10;}
    cout<<reverse<<endl;
}
//question 3------------------------------------------------------------
#include<iostream>   
using namespace std;
int main() {
    int age;
    cin>>age;
    int days = age * 365;
    cout<<days<<endl;
}
//question 4------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
    int minutes;
    cin>>minutes;
    int hour = minutes / 60;
    int mins = minutes % 60;
    cout<<hour<<" "<<mins<<endl;}
//question 5------------------------------------------------------------
#include<iostream>   
using namespace std;
int main(){
    int seconds;
    cin>>seconds;
    int hour = seconds / 3600;
    int mins = (seconds % 3600) / 60;
    int secs = seconds % 60;
    cout<<hour<<" "<<mins<<" "<<secs<<endl;
}
//queation 6------------------------------------------------------------
#include<iostream>
using namespace std;
int main() { 
    int celsius;
    cin>>celsius;
    double f = celsius * 9/5 + 32;
    cout<<f<<endl;
}
//question 7------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
   int totalamount,percentage;
   cout<<"Enter the Total amount And percentage: ";
   cin>>totalamount>>percentage;
   int Discount = totalamount * percentage / 100;
   int finalDistountedPrice = totalamount - Discount;
   cout<<"Discounted Price: "<<finalDistountedPrice<<endl;  
}  
//question 8------------------------------------------------------------
#include <iostream>
using namespace std;
int main() {
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    char next1 = ch +1;
    char next2 = ch +2;
    cout<<"Next two characters: "<<next1<<", "<<next2<< endl;}
//question 9------------------------------------------------------------
#include <iostream>
using namespace std;
int main() {
    int totalamount;
    cout<<"Enter the Aomunt of money in rupees: ";
    cin>>totalamount;
    int note =totalamount/100;
    int remains=totalamount%100;
    cout<<"100 rupee note is: "<<note<<endl;
    cout<<"remains moneys is: "<<remains<<endl;}
//question 10-----------------------------------------------------------
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three marks : ";
    cin>>a>>b>>c;
    double average = (a+b+c)/3.0;
    cout<<"Average marks: "<<average<<endl;
}
//question 11-----------------------------------------------------------
#include <iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter radius of circle: ";
    cin>>r;
    double area = 3.14*r*r;
    cout<<"Area of circle: "<<area<<endl;
}
//question 12-----------------------------------------------------------
#include <iostream>
using namespace std;
int main(){
    int hours1,minutes1;
    cout<<"Enter hours1 and minutes1: ";
    cin>>hours1>>minutes1;
    int hours2,minutes2;
    cout<<"Enter hours2 and minutes2: ";
    cin>>hours2>>minutes2;
    int totalminutes = hours1*60+minutes2 +hours2*60+minutes2;
    cout<<"Total minutes : "<<totalminutes<<endl;
}
//question 13-----------------------------------------------------------
#include <iostream>
using namespace std;
int main(){
    float number;
    cout<<"Enter a floating number: ";
    cin>>number;
    cout<<"Fractional part: "<<number -int(number)<<endl;
}
//question 14-----------------------------------------------------------
#include <iostream>  
using namespace std;
int main(){
    int year;
    cout<<"Enter a 4-digit year: ";
    cin>>year;
    cout<<year%1000<<endl;
}
//question 15-----------------------------------------------------------
#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int lastDigit=number%10;
    int rem=lastDigit%2;
    cout<<"Last digit : "<<lastDigit<<endl;
    cout<<"Remainder when last digit is divided by 2 : "<<rem<<endl;
}
//question 16-----------------------------------------------------------
#include <iostream>
using namespace std;
int main(){
    int totalSeconds;
    cout<<"Enter total seconds: ";
    cin>>totalSeconds;
    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;
    cout<<"Minutes: "<<minutes<<endl;
    cout<<"Seconds: "<<seconds<<endl;
}
//question 17-----------------------------------------------------------
#include <iostream>
using namespace std;
int main(){
   char ch,Ch;
   cout<<"Enter a two character: ";
   cin>>ch>>Ch;
   int diffrence= ch - Ch;
   cout<<"Difference of ASCII value: "<<diffrence<<endl;
}
// question 18-----------------------------------------------------------
#include <iostream>
using namespace std;
int main(){
    double number;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"integer part: "<<int(number)<<endl;
    cout<<"Decimal part: "<<number - int(number)<<endl;
    cout<<"Integer paert + Decimal part : "<<"int(number) + (number - int(number))"<<endl;
}