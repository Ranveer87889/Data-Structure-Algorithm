class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
         int n = heights.size(); 
        int left[n], right[n];  
        // filling the left array with index of nearest smaller lewft element
        stack<int> stk; 
        for(int i = 0; i<n; ++i){
            while(!stk.empty() && heights[stk.top()] >= heights[i])
                stk.pop(); 
            if(stk.empty())
                left[i] = -1; 
            else
                left[i] = stk.top(); 
            stk.push(i); 
        }
        // filling the right array with index of nearest smaller right element
        stack<int> stk1;  
        for(int i = n-1; i >= 0; i--){
            while(!stk1.empty() && heights[stk1.top()] >= heights[i])
                stk1.pop(); 
            if(stk1.empty())
                right[i] = n; 
            else
                right[i] = stk1.top(); 
            stk1.push(i); 
        }
        
        // now finding the maximum area of the rectangle
        int mx = 0 ;
        for(int i = 0; i<n; ++i){
            mx = max(mx, heights[i]*(right[i]-left[i]-1)); 
        }
        return mx;
    }
};