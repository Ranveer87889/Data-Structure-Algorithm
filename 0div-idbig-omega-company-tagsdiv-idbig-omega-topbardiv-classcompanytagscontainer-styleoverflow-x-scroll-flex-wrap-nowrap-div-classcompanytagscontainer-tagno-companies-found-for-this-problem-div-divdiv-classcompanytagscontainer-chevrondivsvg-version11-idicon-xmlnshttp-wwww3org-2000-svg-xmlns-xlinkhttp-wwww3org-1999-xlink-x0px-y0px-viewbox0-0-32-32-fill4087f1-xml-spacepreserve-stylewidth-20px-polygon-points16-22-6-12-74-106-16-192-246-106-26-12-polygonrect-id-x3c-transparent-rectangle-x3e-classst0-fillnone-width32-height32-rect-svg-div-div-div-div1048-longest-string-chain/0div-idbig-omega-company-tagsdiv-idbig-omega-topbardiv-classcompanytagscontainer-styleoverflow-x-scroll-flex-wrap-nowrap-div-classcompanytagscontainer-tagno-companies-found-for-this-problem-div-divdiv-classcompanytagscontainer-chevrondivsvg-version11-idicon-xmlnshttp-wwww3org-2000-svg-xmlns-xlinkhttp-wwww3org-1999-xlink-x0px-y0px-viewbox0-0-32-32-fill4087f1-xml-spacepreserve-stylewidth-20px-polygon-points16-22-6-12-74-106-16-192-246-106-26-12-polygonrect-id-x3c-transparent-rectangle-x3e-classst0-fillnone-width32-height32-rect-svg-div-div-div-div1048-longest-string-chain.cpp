class Solution {
public:
    int longestStrChain(vector<string>& words) {
          sort(words.begin(),words.end(),[](string &s1,string &s2){
            return s1.size() < s2.size();
        });
        map<string,int> dp;
        int ans = 1;
        for(auto x:words){
            for(int i=0;i<x.size();i++){
                string pred = x.substr(0,i) + x.substr(i+1);
                int temp = dp.find(pred)==dp.end()?1:dp[pred]+1;
                dp[x] = max(dp[x],temp);
                ans = max(ans,dp[x]);
            }
        }
        return ans;
    }
};