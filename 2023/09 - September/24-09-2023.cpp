/*

Author : Akshat Kelotra
Date : 24/09/2023
Problem : Find duplicates in an array
Difficulty : Easy
Problem Link : https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int> v;
        int a[n]={0};
        for(int i=0; i<n; i++){
            a[arr[i]]++;
        }
        for(int i=0; i<n; i++){
            if(a[i]>1)
                v.push_back(i);
        }
        if(v.empty())
            v.push_back(-1);
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends