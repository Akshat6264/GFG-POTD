/*

Author : Akshat Kelotra
Date : 05/03/2024
Problem : Maximum Index
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/maximum-index-1587115620/1

*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        vector<int> pref(n, INT_MAX);
        vector<int> suff(n, INT_MIN);
        
        int ans = 0;
        
        pref[0] = a[0], suff[n-1] = a[n-1];
        
        for(int i = 1; i < n; ++i)
        {
            pref[i] = min(pref[i-1] , a[i]);
        }
        
        for(int i = n-2; i >= 0; --i)
        {
            suff[i] = max(suff[i+1], a[i]);
        }
        
        int i = 0, j = 0;
        
        while(j < n)
        {
            if(pref[i] <= suff[j])
            {
                ans = max(ans, j - i);
                ++j;
            }
            else
            {
                ++i;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends