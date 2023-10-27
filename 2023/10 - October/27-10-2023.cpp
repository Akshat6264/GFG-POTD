/*

Author : Akshat Kelotra
Date : 27/10/2023
Problem : Minimum Deletions
Difficulty : Medium
Problem Link : https://practice.geeksforgeeks.org/problems/minimum-deletitions1648/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int minimumNumberOfDeletions(string S) { 
        int n = S.length();
        int arr[n + 1][n + 1];
        string s = S;
        reverse(s.begin(), s.end());

        for (int i = n; i >= 0; i--) {
            for (int j = n; j >= 0; j--) {
                if (i == n || j == n)
                    arr[i][j] = 0;
                else if (S[i] == s[j])
                    arr[i][j] = 1 + arr[i + 1][j + 1];
                else
                    arr[i][j] = max(arr[i][j + 1], arr[i + 1][j]);
            }
        }

        return n - arr[0][0];
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends