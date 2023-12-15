/*

Author : Akshat Kelotra
Date : 14/12/2023
Problem : Painting the Fence
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/painting-the-fence3727/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long countWays(int n, int k){
        long mod = 1000000007;
        long same = 0, diff = k, total = same+diff;

        for(int i=2; i<=n; i++){
            same = diff;
            diff = (total*(k-1))%mod;
            total = (same+diff)%mod;

        }
        return total;
    }
};

//{ Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends