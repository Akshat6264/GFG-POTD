/*

Author : Akshat Kelotra
Date : 23/09/2023
Problem : Equilibrium Point
Difficulty : Easy
Problem Link : https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1

*/

//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        int sum=0;
        if(n==1) return 1;
        for(int i=0;i<n;i++) sum+=a[i];
        int sum2=a[0];
        for(int i=1;i<n-1;i++){
            if(sum2== (sum-sum2-a[i])) return i+1;
            else sum2+=a[i];
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends