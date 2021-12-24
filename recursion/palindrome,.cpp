#include<iostream>
using namespace std;

bool palindrome(int i,string s,int n){
    
    
    if(i>=n/2)
    return true;

    if(s[i]==s[n-i-1]){
        return palindrome(i+1,s,n);
    }
    return false;
    
}

int main(){
    string s = "121";
    int n = s.length();
    int i = 0;
    palindrome(i,s,n);
    if(true) cout<<"String is palindrome";
    else cout<<"String is not palindrome";

}