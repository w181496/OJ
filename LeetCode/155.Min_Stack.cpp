class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> arr;
    MinStack() {
        arr.clear();
    }
    
    void push(int x) {
        this->arr.push_back(x);
    }
    
    void pop() {
        this->arr.pop_back();
    }
    
    int top() {
        return this->arr.back();
    }
    
    int getMin() {
        int mn = 1e10;
        for(int i = 0; i < this->arr.size(); i++)
            mn = min(mn, this->arr[i]);
        return mn;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
