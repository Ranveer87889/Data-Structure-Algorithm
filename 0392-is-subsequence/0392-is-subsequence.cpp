class Solution {
public:
    bool isSubsequence(string s, string t) {
      int count =-1;int x =0;
        for(int i=0;i<s.size();i++){
            for(int j = count+1;j<t.size();j++){
                if(s[i]==t[j]){
                    count = j;
                    x++;
                    break;
                }
            }
        }
        if(x==s.size()) return true;
        
        return false;
    }
};