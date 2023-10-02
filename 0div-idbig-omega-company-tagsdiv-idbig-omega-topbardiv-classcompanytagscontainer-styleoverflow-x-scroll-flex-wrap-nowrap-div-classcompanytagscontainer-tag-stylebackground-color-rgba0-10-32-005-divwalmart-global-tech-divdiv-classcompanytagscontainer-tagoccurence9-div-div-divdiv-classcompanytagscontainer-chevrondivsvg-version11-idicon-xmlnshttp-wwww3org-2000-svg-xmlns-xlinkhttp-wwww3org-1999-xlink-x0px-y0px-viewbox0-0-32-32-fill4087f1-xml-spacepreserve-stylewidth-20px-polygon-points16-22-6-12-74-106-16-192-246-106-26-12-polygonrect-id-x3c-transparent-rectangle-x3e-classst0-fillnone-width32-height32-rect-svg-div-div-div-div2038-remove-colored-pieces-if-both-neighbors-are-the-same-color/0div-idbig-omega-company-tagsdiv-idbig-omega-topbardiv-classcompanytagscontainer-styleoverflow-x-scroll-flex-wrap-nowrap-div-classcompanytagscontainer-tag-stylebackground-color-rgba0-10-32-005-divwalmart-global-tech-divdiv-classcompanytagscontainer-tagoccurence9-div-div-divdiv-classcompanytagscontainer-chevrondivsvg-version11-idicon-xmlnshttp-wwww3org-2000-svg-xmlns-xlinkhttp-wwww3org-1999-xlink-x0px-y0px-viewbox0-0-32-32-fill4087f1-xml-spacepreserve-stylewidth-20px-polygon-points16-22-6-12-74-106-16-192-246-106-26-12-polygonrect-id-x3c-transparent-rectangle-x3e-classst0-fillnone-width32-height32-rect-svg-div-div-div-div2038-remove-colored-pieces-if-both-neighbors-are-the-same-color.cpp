class Solution {
public:
    bool winnerOfGame(string colors) {
        int countA=0,countB=0;int count=0;
        for(int i=0;i<colors.size();i++){
            if(colors[i]=='A') count++;
            else{
                if(count>=3) countA+=count-2;
                count =0;
            }
        }
         if(count>=3) countA+=count-2;
        count =0;
         for(int i=0;i<colors.size();i++){
            if(colors[i]=='B') count++;
            else{
                if(count>=3) countB+=count-2;
                count =0;
            }
             
        }
         if(count>=3) countB+=count-2;
        if(colors.size()<3) return false;
        if(countA>countB) return true;
        else return false;
        
    }
};