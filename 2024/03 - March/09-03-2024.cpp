/*

Author : Akshat Kelotra
Date : 09/03/2024
Problem : Find the N-th character
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/find-the-n-th-character5925/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        if(r==0) return s[n];
        char c = nthCharacter(s, r-1, n/2);
        if (n%2 == 1){
            if(c == '0'){
                return '1';
            }
            else{
                return '0';
            }
        }
        else{
            if(c == '0'){
                return '0';
            }
            else{
                return '1';
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends