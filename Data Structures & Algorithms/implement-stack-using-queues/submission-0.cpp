class MyStack {
public:
    vector<int> values = {}; 
    MyStack() {
        
    }
    
    void push(int x) {
        values.push_back(x);
    }
    
    int pop() {
        int value = values[values.size() - 1];
        values.pop_back();
        return value;
    }
    
    int top() {
        return values[values.size() - 1];
    }
    
    bool empty() {
        return values.size() == 0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */