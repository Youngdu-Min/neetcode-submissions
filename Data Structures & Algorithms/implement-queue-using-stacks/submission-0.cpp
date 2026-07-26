class MyQueue {
public:
    vector<int> values = {};
    MyQueue() {
        
    }
    
    void push(int x) {
        values.push_back(x);
    }
    
    int pop() {
        int value = values[0];
        values.erase(values.begin());
        return value;
    }
    
    int peek() {
        return values[0];
    }
    
    bool empty() {
        return values.size() == 0;
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