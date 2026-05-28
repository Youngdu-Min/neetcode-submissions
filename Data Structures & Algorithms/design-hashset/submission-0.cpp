class MyHashSet {
public:
    vector<int> keys;
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(!contains(key))
            keys.push_back(key);
    }
    
    void remove(int key) {
        for(int idx = 0; idx < keys.size(); idx++)
        {
            if(keys[idx] == key)
            {
                keys.erase(keys.begin() + idx, keys.begin() + idx + 1);
            }
        }
    }
    
    bool contains(int key) {
        for(int idx = 0; idx < keys.size(); idx++)
        {
            if(keys[idx] == key)
            {
                return true;
            }
        }

        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */