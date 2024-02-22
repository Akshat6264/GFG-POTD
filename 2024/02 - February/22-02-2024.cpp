/*

Author : Akshat Kelotra
Date : 22/02/2024
Problem : Distinct occurrences
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/distinct-occurrences/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    public:
    int mod = 1e9 + 7;
    int solve(int i, int j,string s, string t, vector<vector<int>> &dp){
        if(i== s.size()){
            return j==t.size();
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        int notTake = solve (i+1, j, s,t,dp);
        int take = 0;
        if(s[i] == t[j]){
            
            take = solve(i+1, j+1, s, t, dp);
        }
        return dp[i][j] = (take + notTake )% mod;
    }
    int subsequenceCount(string s, string t)
    {
      //Your code here
      
      int m = s.size();
      int n = t.size();
      
      vector <vector<int>> dp(m+1, vector<int>(n+1, -1));
      
      return solve(0,0,s,t,dp);
    }
};
 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends