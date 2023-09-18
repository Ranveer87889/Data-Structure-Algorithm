class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        int m= mat.size();
        int n = mat[0].size();
        int arr[m];
        for(int i=0;i<m;i++){
            int sum =0;
        for(int j=0;j<n;j++){
            if(mat[i][j]==1){
                sum++;
            }
        }
        arr[i]=sum;
        }
      vector<int> v;
      //find minimum each time 
      for(int j=0;j<m;j++){
      int mini = INT_MAX;
      int idx=0;
      for(int i=0;i<m;i++){
          if(arr[i]<mini){
              mini = arr[i];
               idx = i;
          }
      }
        
          v.push_back(idx);
          arr[idx]=INT_MAX;
        
      }
       vector<int>x;
       for(int i=0;i<k;i++){
           x.push_back(v[i]);
       }
       return x; 
    }
};