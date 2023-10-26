/*

Author : Akshat Kelotra
Date : 26/10/2023
Problem : Minimum Operations
Difficulty : Easy
Problem Link : https://practice.geeksforgeeks.org/problems/find-optimum-operation4504/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int minOperation(int n)
    {
        if(n==1) return 1;
        if(n==2) return 2;
        int steps=2;
        while(n>2){
            if(n%2==0){
                n=n/2;
            }
            else{
                n=n-1;
            }
            steps++;
        }
        return steps;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}
// } Driver Code Ends