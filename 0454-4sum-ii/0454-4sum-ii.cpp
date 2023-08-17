class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
       int n = nums1.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp1[nums1[i]+nums2[j]]++;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp2[nums3[i]+nums4[j]]++;
            }
        }
        int ans =0;
        for(auto it = mp1.begin();it!=mp1.end();it++){
            if(it->first < 0){
            if(mp2.find(abs(it->first))!=mp2.end()){
                auto it2 =mp2.find(abs(it->first));
                ans = ans + it->second*it2->second;
            }
        }
            if(it->first >=0){
                 if(mp2.find(-1*(it->first))!=mp2.end()){
                auto it2 =mp2.find(-1*(it->first));
                ans = ans + it->second*it2->second;
            }
            }
        }
        return ans;
    }
};