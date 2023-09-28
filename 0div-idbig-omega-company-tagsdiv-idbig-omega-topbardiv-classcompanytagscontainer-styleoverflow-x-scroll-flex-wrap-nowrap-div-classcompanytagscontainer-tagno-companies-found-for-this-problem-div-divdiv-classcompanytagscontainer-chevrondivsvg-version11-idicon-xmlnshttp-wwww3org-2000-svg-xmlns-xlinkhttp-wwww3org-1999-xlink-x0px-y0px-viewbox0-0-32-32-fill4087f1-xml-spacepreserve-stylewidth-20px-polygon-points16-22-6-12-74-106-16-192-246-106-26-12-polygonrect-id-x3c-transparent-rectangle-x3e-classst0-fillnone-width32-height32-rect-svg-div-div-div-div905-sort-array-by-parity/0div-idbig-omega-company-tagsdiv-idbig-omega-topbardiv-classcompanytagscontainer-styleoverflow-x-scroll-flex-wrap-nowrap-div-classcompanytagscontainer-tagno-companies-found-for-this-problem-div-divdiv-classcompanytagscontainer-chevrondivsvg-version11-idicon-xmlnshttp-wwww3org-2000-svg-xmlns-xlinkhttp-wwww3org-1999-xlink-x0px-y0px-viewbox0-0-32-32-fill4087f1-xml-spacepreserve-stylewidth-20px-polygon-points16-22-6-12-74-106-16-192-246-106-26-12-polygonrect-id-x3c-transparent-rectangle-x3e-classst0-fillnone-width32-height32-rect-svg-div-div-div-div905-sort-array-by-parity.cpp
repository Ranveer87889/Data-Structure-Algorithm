class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);
        int j=0;int k = n-1;
        for(int i=0;i<n;i++){
            if(nums[i]%2 != 0){
                v[k]=nums[i];
                k--;
            }
            else {
                v[j]=nums[i];
                j++;
            }
        }
        return v;
    }
};