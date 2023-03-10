//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
  long int mod=1e9+7;   
  int totalWays(int n, vector<int>capacity) {
        // code here
        sort(capacity.begin(),capacity.end());
        long int k=1;
        for(int i=0;i<capacity.size();i++){
            k=(k*(capacity[i]-i))%mod;
        }
        return k;
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>capacity(n);
		for(int i = 0; i < n; i++)
			cin >> capacity[i];
		Solution ob;
		int ans = ob.totalWays(n, capacity);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends