// #include<bits/stdc++.h>
// using namespace std;

// int factorial(int n){
//     if(n == 0 || n == 1){
//         return 1;
//     } 
//     else {
//         return n * factorial(n-1);
//     }
// }

// int main(){
//     int n;
//     cin >> n;

//     vector<int> nos(n);
    
//     cout << "Enter " << n << " numbers:\n";
//     for(int i = 0; i < n; ++i){
//         cin >> nos[i];
//     }

//     cout << "Factorials:\n";
//     for(int i = 0; i < n; ++i){
//         cout << "Factorial of " << nos[i] << " is: " << factorial(nos[i]) << endl;
//     }

//     return 0;
// }

//FOR SINGLE NUMBER FACTORIAL USING RECURSION

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial of " << n << " is: " << factorial(n) << endl;

    return 0;
}
