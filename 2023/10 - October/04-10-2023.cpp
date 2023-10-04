/*

Author : Akshat Kelotra
Date : 04/10/2023
Problem : Roman Number to Integer
Difficulty : Easy
Problem Link : https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1

*/

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        int ans = 0;
        int n = str.size();
        unordered_map<char, int> mpp;
        
        mpp['I'] = 1;
        mpp['V'] = 5;
        mpp['X'] = 10;
        mpp['L'] = 50;
        mpp['C'] = 100;
        mpp['D']= 500;
        mpp['M'] = 1000;
        
        
        ans += mpp[str[n-1]];
        for(int i = n-2; i >= 0; i--){
            char cur = str[i];
            char prev = str[i+1];
            
            if(mpp[cur] < mpp[prev]){
                ans  -= mpp[cur];
            } else {
                ans += mpp[cur];
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends