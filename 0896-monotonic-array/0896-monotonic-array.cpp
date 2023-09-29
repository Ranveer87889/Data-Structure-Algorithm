class Solution {
public:
    bool incr_monotonic(vector<int>&nums){
        int n = nums.size();
        stack<int> s;
        s.push(nums[0]);
        int i=1;
        while(i<n){
            if(nums[i]>=s.top()) s.push(nums[i]);
            i++;
        }
        if(s.size()==n) return true;
        return false;
    }
      bool decr_monotonic(vector<int>&nums){
        int n = nums.size();
        stack<int> s1;
        s1.push(nums[0]);
        int i=1;
        while(i<n){
            if(nums[i]<=s1.top()) s1.push(nums[i]);
            i++;
        }
        if(s1.size()==n) return true;
        return false;
    }
    bool isMonotonic(vector<int>& nums) {
        bool x1 = incr_monotonic(nums);
        bool x2 = decr_monotonic(nums);
        return (x1 || x2);
    }
};