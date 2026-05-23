class MinStack {
private:
    vector<int> minStack {};
public:
    MinStack() {
        
    }
    
    void push(int val) {
        minStack.push_back(val);
    }
    
    void pop() {
        minStack.pop_back();
    }
    
    int top() {
        return minStack.back();
    }
    
    int getMin() {
        int min = std::numeric_limits<int>::max();
        for(int idx = 0; idx < minStack.size(); idx++)
        {
            int currValue = minStack.at(idx);
            if(currValue < min)
            {
                min = currValue;
            }
        }
        return min;
    }
};
