/*

Author : Akshat Kelotra
Date : 27/09/2023
Problem : Find the closest pair from two arrays
Difficulty : Easy
Problem Link : https://practice.geeksforgeeks.org/problems/find-the-closest-pair-from-two-arrays4215/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        vector<int> values(2,0);
        int i=0;
        int j=m-1;
        int ans=INT_MAX;
        int sum=arr[0]+brr[m-1];
        while(i<n && j>=0)
        {
            sum=arr[i]+brr[j];
            if(ans>abs(sum-x))
            {
                ans=abs(sum-x);
                values[0]=arr[i];
                values[1]=brr[j];
            }
            
            if(sum<=x)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return values;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends