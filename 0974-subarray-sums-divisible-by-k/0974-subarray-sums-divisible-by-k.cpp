class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
          int count=0, sum=0, mod=0; // so we have intialize the integers
        unordered_map<int, int> mp; // make an unordered map
        mp[mod]++; //  put mod nd its frequency 
        for(int i=0;i<nums.size();i++){
            sum=nums[i]+sum; // do sum 
            mod = sum%k; // find the remainder
            if(mod < 0) //if mod is neagtive thn add k and make it positive 
                mod += k;
            if(mp.find(mod)!=mp.end()){ // Check if the remainder is already present in the map
                count= mp[mod]+count; // If it is, add the number of occurrences of that mod to the count (count me value dal rhe he of the mod present in mp value  + count is already 0 in starting)
            
                mp[mod]++; // Increment the count bcz we found same mod element again so we will increase the frequency 
            }
            else
                mp[mod]++; // If the remainder is not present in the map, add it with a count of 1
        }
        return count;
    }
};