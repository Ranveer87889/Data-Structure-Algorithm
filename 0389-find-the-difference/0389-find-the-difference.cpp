class Solution {
public:
    char findTheDifference(string s, string t) {
       int arr1[26]={0};
        for(int i=0;i<s.size();i++){
            arr1[s[i]-'a']++;
        }
         for(int i=0;i<t.size();i++){
            arr1[t[i]-'a']--;
        }
         for(int i=0;i<26;i++){
           if(arr1[i]!=0)return 97+i;
        }
        return '1';
       
    }
};