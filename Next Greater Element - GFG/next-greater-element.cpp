//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
     vector<long long> ans(n,-1);
     stack<pair<long,long>>stk;
     stk.push({arr[0],0});
     if(n==1) return ans;
     for(int i=1;i<n;i++){
        while(!stk.empty() && arr[i]>stk.top().first){
             pair<long,long>p =stk.top();
             ans[p.second]=arr[i];
              stk.pop();
         } 
         stk.push({arr[i],i});
     }
     return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends