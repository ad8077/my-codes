// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{ if(s.length()%2!=0)//length odd
{
    return -1;
}
int open =0;
int close=0;
for(int i=0;i<s.size();i++)
{
    if(s[i]=='{')
    {
        open++;
    }
    else{
       open--;
    }
       
       
    if(open<0)
    {
        close++;
        open=1;
    }
}
    // your code here

    return close+open/2;
}