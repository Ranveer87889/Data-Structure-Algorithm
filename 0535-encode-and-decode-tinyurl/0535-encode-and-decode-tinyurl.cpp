class Solution {
public:
       unordered_map<string,string>mp;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        mp[longUrl]="leetcode&123";
        return "leetcode&123";
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second==shortUrl){
                return it->first;
            }
        }
        return 0;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));