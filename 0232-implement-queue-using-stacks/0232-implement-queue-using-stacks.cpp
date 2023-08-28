class MyQueue {
public:
    stack<int>s1;
    stack<int>s2;
    int front,bottom;
    MyQueue() {
        //this is the constructor . we dont need to put anything in this;
    }
    
    void push(int x) {
        if(s1.empty()&&s2.empty()){
            front = x;
            bottom=x;
            s1.push(x);
        }
       else if(s1.empty()){
             bottom =x;
             s1.push(x);
         }
        else {
            s1.push(x);
        }
    }
    
    int pop() {
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            
        }
        int ans = s2.top();
        s2.pop();
        if(!s2.empty()){
            front = s2.top();
            
        }
        if(s2.empty()){
            front = bottom;
        }
        return ans;
    }
    
    int peek() {
       return front; 
    }
    
    bool empty() {
       return ( s1.empty() && s2.empty()); 
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */