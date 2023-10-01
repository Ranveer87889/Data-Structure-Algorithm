class Solution {
public:
    string reverseWords(string s) {
      string a="",t="";
        for(int i=0;i<s.size();i++){
            if(i==s.size()-1){
                a+=s[i];
reverse(a.begin(),a.end());
            t+=a;    
                
            }
            else if(s[i]==' '){

                reverse(a.begin(),a.end());
                t+=a;
                t+=' ';
                a="";
            }
            else{
                a+=s[i];
            }
        }
        return t;
    }
};