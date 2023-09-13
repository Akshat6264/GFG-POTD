/*

Author : Akshat Kelotra
Date : 13/09/2023
Problem : Largest number possible
Difficulty : Easy
Problem Link : https://practice.geeksforgeeks.org/problems/largest-number-possible5028/1

*/

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        if(S>N*9 or (S==0 and N>1)) 
            return "-1";
        string num="";
        while(S>=9){
            num+="9";
            N-=1;
            S-=9;
        }
        while(N>0){
            if(S>0){
                num+=to_string(S);
                S=0;
            }
            else
                num+="0";
            N--;
        }
        return num;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends