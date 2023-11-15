/*

Author : Akshat Kelotra
Date : 15/11/2023
Problem : Better String
Difficulty : Hard
Problem Link : https://www.geeksforgeeks.org/problems/better-string/1

*/

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string betterString(string str1, string str2) {
        int res1 = distinctSubsequences(str1);
        int res2 = distinctSubsequences(str2);

        if (res1 >= res2) return str1;
        return str2;
    }

    int distinctSubsequences(string S) {
        int n = S.length();
        vector<int> arr(26, -1);
        int ans = 0, diff = 0;

        for(int i = 0; i < n; i++){
            int x = S[i] - 'a';
            if(i == 0){
                ans = 1;
                arr[x] = 1;
                continue;
            }
            diff = 1 + ans;
            if(arr[x] == -1) ans = ans + diff;
            else ans = ans + diff - arr[x];
            arr[x] = diff;
        }
        return ans + 1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        Solution obj;
        string ans = obj.betterString(str1, str2);
        cout << ans << "\n";
    }
}

// } Driver Code Ends