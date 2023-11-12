/*

Author : Akshat Kelotra
Date : 12/11/2023
Problem : Check if string is rotated by two places
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        int n=str1.length();
        if(n==2) return str1==str2;
        for(int i=0;i<n;i++){
            if( str1[(i+2)%n]==str2[i] || str1[(n+i-2)%n]==str2[i] ) continue;
            else return false;
        }
        return true;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends