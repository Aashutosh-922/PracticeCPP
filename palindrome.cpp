#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& s){
int left = 0;
int right = s.length() - 1;

while(left < right) {
    if (s[left] != s[right]){
        return false;
    }
    ++left;
    --right;
}
return true;
}

int main(){
    string input;
    cin>>input;

    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}