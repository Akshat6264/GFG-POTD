/*

Author : Akshat Kelotra
Date : 02/10/2023
Problem : Number of distinct subsequences
Difficulty : Hard
Problem Link : https://practice.geeksforgeeks.org/problems/number-of-distinct-subsequences0909/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	    int mod = 1000000007;
        int n = s.length();
        vector<long long> dp(n + 1, 0);

        dp[0] = 1;
        unordered_map<char, int> lo;

        for (int i = 1; i <= n; i++) {
            dp[i] = (2 * dp[i - 1]) % mod;
            char ch = s[i - 1];

            if (lo.count(ch)) {
                int j = lo[ch];
                dp[i] = (dp[i] - dp[j] + mod) % mod;
            }
            lo[ch] = (i - 1) % mod;
        }

        return int(dp[n] % mod);
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends