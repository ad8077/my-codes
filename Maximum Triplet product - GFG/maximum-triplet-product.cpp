//{ Driver Code Starts
//Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
    	// Complete the function
    	long long M1=INT_MIN,M2=INT_MIN,M3=INT_MIN;
        long long m1=INT_MAX,m2=INT_MAX;
        
    	    for(int i=0;i<n;i++){
    	        if(M1<=arr[i]){
    	            M3=M2;
    	            M2=M1;
    	            M1=arr[i];
    	        }else if(M2<=arr[i]){
    	            M3=M2;
    	            M2=arr[i];
    	        }else if(M3<=arr[i])M3=arr[i];
    	        
    	        if(m1>=arr[i]){
    	            m2=m1;
    	            m1=arr[i];
    	        }else if(m2>=arr[i])m2=arr[i];
    	        
    	        
    	    }
    	    
    	    return max(M1*M2*M3,M1*m1*m2);
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends