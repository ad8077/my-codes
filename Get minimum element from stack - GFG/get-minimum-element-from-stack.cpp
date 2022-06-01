// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    stack<int> min;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       
       int getMin(){
           
           if(s.empty())
             return -1;
             
             return min.top();
       }
       
       /*returns poped element from stack*/
       int pop(){
         if(s.empty())
         {
             return -1;
           //Write your code here
       }
       int y;
       y = s.top();
       s.pop();
       if(min.top()==y)
       {
           min.pop();
       }
       return y;
       }
       /*push element x into the stack*/
       void push(int x){
           s.push(x);
           if(min.empty())
           {
               min.push(x);
           }
           else
           {
               if(x<=min.top())
               {
                   min.push(x);
               }
           }
           
           //Write your code here
       }
};

// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}
  // } Driver Code Ends