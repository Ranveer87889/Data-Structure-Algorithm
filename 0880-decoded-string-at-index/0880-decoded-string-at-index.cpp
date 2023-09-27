class Solution {
public:
    string decodeAtIndex(string s, int k) {
           int n=s.size();
        if(!(s[n-1]>='0'&&s[n-1]<='9'))s+='1';
        stack<string> sts;
        stack<pair<long long int,int>> stp;
        string st;
        for(auto it:s){
            if(it>='0'&&it<='9'){
                if(sts.empty()){
                    stp.push({st.size(),it-'0'});
                }
                else{
                    stp.push({(stp.top().first*stp.top().second)+st.size(),it-'0'});
                }
                sts.push(st);
                st="";
            }
            else st+=it;
        }
        if(k%(stp.top().first)==0) k=stp.top().first;
        else  k=k%(stp.top().first);
        stp.pop();
        while(!stp.empty()){
            long long int m=stp.top().first,f=stp.top().second;
            if(k>m*f){
                string str;
                str+=sts.top()[k-m*f-1];
                return str;
            }
            else{
                if(k%m==0) k=m;
                else  k=k%m;
                stp.pop();
                sts.pop();
                cout<<sts.top();
            }

        }
         string str;
         str+=sts.top()[k-1];
        return str;
    }
};