/*

Author : Akshat Kelotra
Date : 01/11/2023
Problem : Frequencies of Limited Range Array Elements
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1

*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        int i=0;
        while(i<N){
            if(arr[i]<=0 or arr[i]>N ){
                i++;
                continue;
            }
            int index=arr[i]-1;
            if(arr[index]>0){
                arr[i]=arr[index];
                arr[index]=-1;
            }
            else{
                arr[i]=0;
                arr[index]--;
                i++;
            }
        }
        for(i=0;i<N;i++){
            if(arr[i]<0){
                arr[i]=-1*arr[i];
            }
            else{
                arr[i]=0;
            }
        }
    }
};


//{ Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}





// } Driver Code Ends