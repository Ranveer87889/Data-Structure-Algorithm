//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int solve(vector<long>&v,long  n,long i){
        if(i>n) return 0;
        if(i==n) return 1;
        if(v[i]!=-1){
            return v[i];
        }
        
        
        
        v[i]=(solve(v,n,i+1)+solve(v,n,i+2))%1000000007;
        return v[i];
    }
    
    int countWays(int n)
    {
        vector<long> v(n+1,-1);
      long x =  solve(v,n,0);
      return x;
    
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends