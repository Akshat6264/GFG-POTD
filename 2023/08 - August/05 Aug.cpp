/*

Author : Akshat Kelotra
Date : 05/08/2023
Problem : Chocolate Distribution Problem
Difficulty : Easy
Problem Link : https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        long long minDiff=INT_MAX;
        sort(a.begin(), a.end());
        for(int i=m-1; i<n; i++){
            if((a[i]-a[i-(m-1)])<minDiff){
                minDiff=a[i]-a[i-(m-1)];
            }
        }
        return minDiff;
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends