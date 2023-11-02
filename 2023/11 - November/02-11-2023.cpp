/*

Author : Akshat Kelotra
Date : 02/11/2023
Problem : Minimum distance between two numbers
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/minimum-distance-between-two-numbers/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int dist = 1e9;
        int xi = 0, yi = 0;
        bool f1 = false, f2 = false;

        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                f1 = true;
                xi = i;
            } else if (a[i] == y) {
                f2 = true;
                yi = i;
            }

            if (f1 && f2)
                dist = min(abs(xi, yi), dist);
        }
        return f1 && f2 ? dist : -1;
    }

    int abs(int a, int b) {
        return a > b ? a - b : b - a;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends