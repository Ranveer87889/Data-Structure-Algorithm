class Solution {
public:
    int CountGreaterElement(vector<int> &arr,int n,int mid){
       int count =0;
       for(int i=0;i<n;i++){
              if(arr[i]>=mid) count++;
       }
       return count;
}
    
    
    int hIndex(vector<int>& arr) {
        int n = arr.size();
         int start =0;
    int end = n;
    int ans =INT_MIN;
    while(start<= end){
           int mid  = (start+end)/2;
           if(CountGreaterElement(arr,n,mid)>=mid){
                  ans = max(ans,mid);
                start = mid +1;
           }
           else if(CountGreaterElement(arr,n,mid)<mid){
                  end = mid -1;
           }
          
    }
   return ans;
    }
};