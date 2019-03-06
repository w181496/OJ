class MyStack {
public:
    
    queue<int>q1, q2;
    
    /** Initialize your data structure here. */
    MyStack() {

    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int res;
        while(!q1.empty()) {
            res = q1.front();
            q1.pop();
            if(!q1.empty())
                q2.push(res);
        }
        while(!q2.empty()) {
            int t = q2.front();
            q2.pop();
            q1.push(t);
        }
        return res;
    }
    
    /** Get the top element. */
    int top() {
        return q1.back();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */
