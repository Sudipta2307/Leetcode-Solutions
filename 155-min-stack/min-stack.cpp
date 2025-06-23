class MinStack {
private:
    stack<int> s;
    stack<int>Mins;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(Mins.empty()){
            Mins.push(val);
        }
        else{
            Mins.push(min(val,Mins.top()));
        }
    }
    
    void pop() {
        s.pop();
        Mins.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return Mins.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */