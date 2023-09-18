/*

Author : Akshat Kelotra
Date : 18/09/2023
Problem : Power of 2
Difficulty : Basic
Problem Link : https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1

*/

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        if(n==0)
            return 0;
        if(n==1 || n==2)
            return 1;
        int flag=1;
        while(n>2 && flag==1){
            if(n%2==0){
                n/=2;
            }
            else
                flag=0;
        }
        if(flag==1)
            return 1;
        else
            return 0;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{

    int t;
    cin>>t;//testcases

    for(int i=0;i<t;i++)
    {
        long long n; //input a number n
        cin>>n;

        Solution ob;
         if(ob.isPowerofTwo(n))//Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}

// } Driver Code Ends