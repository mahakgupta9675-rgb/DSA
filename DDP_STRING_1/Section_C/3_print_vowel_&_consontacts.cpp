//Q. 3. Take a character array as input and print:
//    - Total number of vowels
//    - Total number of consonants

#include<iostream>
using namespace std;
int main(){
    char chh[100];
    cin.getline(chh,100);

    int vowels = 0, consonants = 0;

    for (int i = 0; chh[i] != '\0'; i++){
        char ch = chh[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Check vowel
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }    
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}    