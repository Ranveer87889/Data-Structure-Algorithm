class Solution {
public:
    char returnOpposite(char c){
        if(c == ')') return '(';
        if(c == '(') return ')';
        if(c == '[') return ']';
        if(c == ']') return '[';
        if(c == '{') return '}';
        if(c == '}') return '{';
        return 0;
    }
    bool isValid(string s) {
        int n = s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                st.push(s[i]);
            }
            if(s[i]==')'||s[i]==']'||s[i]=='}'){
                if(st.empty()) return false;
                if(s[i]==returnOpposite(st.top())){
                    st.pop();
                }
                else st.push(s[i]);
                
            }
              
            
        }
       return st.empty();
    }
};