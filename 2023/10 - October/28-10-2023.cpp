/*

Author : Akshat Kelotra
Date : 28/10/2023
Problem : Bleak Numbers
Difficulty : Medium
Problem Link : https://practice.geeksforgeeks.org/problems/bleak-numbers1552/1

*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	int is_bleak(int n)
	{
	    int m = n;
        int x = 0;
        while (n > 0) {
            n = n / 2;
            x++;
        }

        for (int i = m - 1; i >= m - x; i--) {
            if (i + countSetBits(i) == m)
                return 0;
        }

        return 1;
    }

    int countSetBits(int x) {
        int ans = 0;
        while (x > 0) {
            if ((x & 1) == 1)
                ans++;
            x = x >> 1;
        }
        return ans;
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends