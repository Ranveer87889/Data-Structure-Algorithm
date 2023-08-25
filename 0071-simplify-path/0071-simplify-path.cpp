class Solution {
public:
    string ans;
     void canonicalPath(stack<string>&stk){
         if(stk.empty()){
             return;
         }
         string x = stk.top();
         stk.pop();
         canonicalPath(stk);
         ans+='/';
         ans+=x;
         
     }
    string simplifyPath(string path) {
       
        stack<string>stk;
        for(int i=0;i<path.size();i++){
           if(path[i] == '/')    
                continue;
            string temp;
			// iterate till we doesn't traverse the whole string and doesn't encounter the last /
            while(i < path.size() && path[i] != '/')
            {
				// add path to temp string
                temp += path[i];
                ++i;
            }
            if(temp == ".")
                continue;
			// pop the top element from stack if exists
            else if(temp == "..")
            {
                if(!stk.empty())
                    stk.pop();
            }
            else
			// push the directory file name to stack
                stk.push(temp);
            
        }
         canonicalPath(stk);
        if(ans=="") return "/";
        else 
        return ans;
    }
};