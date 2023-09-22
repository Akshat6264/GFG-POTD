/*

Author : Akshat Kelotra
Date : 22/09/2023
Problem : First and last occurrences of x
Difficulty : Medium
Problem Link : https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1

*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    public:
    int findFirst(int arr[],int n,int x)
    {
        int low=0,high=n-1,firstOccur=-1;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            if(arr[mid]==x)
            {
                firstOccur=mid;
                high=mid-1;
            }
            else if(arr[mid]<x) low=mid+1;
            else high=mid-1;
        }
        
            return firstOccur;
    }
    int findLast(int arr[],int n,int x)
    {
        int low=0,high=n-1,lastOccur=-1;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            if(arr[mid]==x)
            {
                lastOccur=mid;
                low=mid+1;
            }
            else if(arr[mid]<x) low=mid+1;
            else high=mid-1;
        }
        
            return lastOccur;
    }
    vector<int> find(int arr[], int n , int x )
    {
        int first=findFirst(arr,n,x);
        
        if(first==-1) return {-1,-1};
        
        int last=findLast(arr,n,x);
        
        return {first,last};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends