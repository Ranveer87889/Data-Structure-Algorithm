class Solution {
public:
   vector<vector<int>> dp;
    int solve(int n, int k){
        if(n == 0) return 1;
        if(dp[n][k] != -1) return dp[n][k];
        int ans = 1;
        for(int i = 1; i <= ((k >= 1) ? n : n - 1); i++){
            ans = max(ans, i * solve(n - i, k + 1));
        }
        return dp[n][k] = ans;
    }
    int integerBreak(int n) {
        dp.resize(n + 1, vector<int>(n + 1, -1));
        return solve(n, 0);
    }
};