//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
void f(int num,char str[],int n){
     if(n==num){
         str[n]='\0';
         cout<<str<<" ";
         return ;
     }
    
    if(str[n-1]=='0'){
        str[n]='0';
        f(num,str,n+1);
        str[n]='1';
         f(num,str,n+1);
    }
    if(str[n-1]=='1'){
        str[n]='0';
        f(num,str,n+1);
    }
    
    
    
}
    void generateBinaryStrings(int& num){
        //Write your code
        char str[num];
        
        str[0]='0';
        f(num,str,1);
        
        str[0]='1'; 
        f(num,str,1);
        
        
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        // cout << setprecision(9) << obj.switchCase(choice,vec) << endl;
        obj.generateBinaryStrings(n);
        cout << endl;
        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends