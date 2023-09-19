/*

Author : Akshat Kelotra
Date : 19/09/2023
Problem : Find first set bit
Difficulty : Easy
Problem Link : https://practice.geeksforgeeks.org/problems/find-first-set-bit-1587115620/1

*/

//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        unsigned int cnt=0;
        while(n!=0){
            if(n%2==0){
                n/=2;
                cnt++;
            }
            else{
                cnt++;
                break;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}

// } Driver Code Ends