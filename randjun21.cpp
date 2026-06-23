#include <bits/stdc++.h>
using namespace std;
// leetcode 58. Length of Last word
// Given a string s consisting of words and spaces, return the length of the last word in the string
int lengthoflword(string s){
    int lenght = 0;
    
    for(auto it = s.rbegin(); it != s.rend(); it++){
        cout << *it;

        unsigned char uc = static_cast<unsigned char>(*it); 
        if(isalnum(uc)) { // Checks for both letters and numbers
            lenght++;
        }
        if(isspace(uc) && lenght > 0){
            return lenght;     

        }
    }

}
int main(){
    string s = "Hello Sekai";
    cout << lengthoflword(s);
    return 0;

}